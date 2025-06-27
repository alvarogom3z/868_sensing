#!/usr/bin/python3
import serial

serial_port = 'COM4'
baud_rate = 9600
line_count = 0                                        # variable de conteo de líneas
line_max = 500

ser = serial.Serial(serial_port, baud_rate)           # Nombre del dispositivo UART.
out_file = open('uart_output.txt', 'w')               # Crea un archivo de texto para guardar la salida de la UART.

while True:
    data = ser.readline().decode('utf-8').strip()     # Lee la salida de la UART como una cadena de caracteres.
    out_file.write(data + '\n')                       # Escribe la cadena de caracteres en el archivo de texto.
    line_count += 1
    if line_count >= line_max:
        break

out_file.close()