#!/usr/bin/python3
import serial
import pandas as pd
import sys
from io import StringIO

serial_port = 'COM4'
baud_rate = 9600
line_count = 0                                          # Variable de contar líneas
nSamples = int(sys.argv[1])                             # Muestras que se van a tomar
#text_file = sys.argv[2]                                # Archivo de texto para guardar la salida de la UART.
excel_file = sys.argv[2]                                # Excel para guardar los datos.

ser = serial.Serial(serial_port, baud_rate)             # Nombre del dispositivo UART.

out_file = StringIO()                                   # Leemos y guardamos los datos de UART en memoria                
while True:
    data = ser.readline().decode('utf-8').strip()       # Lee la salida de la UART como una cadena de caracteres.
    out_file.write(data + '\n')                         # Escribe la cadena de caracteres en el archivo de texto.
    line_count += 1
    if line_count >= nSamples:
        break

out_file.seek(0)                                        # Colocamos el puntero en la primera posicion para leer   

# Lee los datos de la salida de la uart y separa las columnas
df = pd.read_csv(out_file, sep=',\s+', header=None, engine='python', names=['Rcvd', 'OK', 'CRC', 'Sent', 'Payld', 'MASize', 'PER', 'MA', 'RSSI', 'IdS', 'IdR'])

# Selecciona las columnas que queremos y su valor numerico
df['Rcvd_value'] = pd.to_numeric(pd.Series(df['Rcvd']).str.extract(r'(-?\d+)')[0])
df['OK_value'] = pd.to_numeric(pd.Series(df['OK']).str.extract(r'(-?\d+)')[0])
df['CRC_value'] = pd.to_numeric(pd.Series(df['CRC']).str.extract(r'(-?\d+)')[0])
df['Sent_value'] = pd.to_numeric(pd.Series(df['Sent']).str.extract(r'(-?\d+)')[0])
df['Payld_value'] = pd.to_numeric(pd.Series(df['Payld']).str.extract(r'(-?\d+)')[0])
df['MASize_value'] = pd.to_numeric(pd.Series(df['MASize']).str.extract(r'(-?\d+)')[0])
df['PER_value'] = pd.to_numeric(pd.Series(df['PER']).str.extract(r'(-?\d+)')[0])
df['MA_value'] = pd.to_numeric(pd.Series(df['MA']).str.extract(r'(-?\d+)')[0])
df['RSSI_value'] = pd.to_numeric(pd.Series(df['RSSI']).str.extract(r'(-?\d+)')[0])
df['IdS_value'] = pd.to_numeric(pd.Series(df['IdS']).str.extract(r'(-?\d+)')[0])
df['IdR_value'] = pd.to_numeric(pd.Series(df['IdR']).str.extract(r'(-?\d+)')[0])

df = df[['Rcvd_value', 'OK_value','CRC_value', 'Sent_value', 'Payld_value', 'MASize_value', 'PER_value', 'MA_value', 'RSSI_value', 'IdS_value', 'IdR_value']]

df.to_excel(excel_file, index=False)                            # Escribe las columnas en el Excel