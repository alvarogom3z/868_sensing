import pandas as pd

# Lee los datos de la salida de la uart y separa las columnas
df = pd.read_csv('uart_output.txt', sep=',\s+', header=None, engine='python', names=['Rcvd', 'OK', 'CRC', 'Sent', 'Payld', 'MASize', 'PER', 'MA', 'RSSI', 'IdS', 'IdR'])

# Selecciona las columnas que queremos y su valor numerico
df['Sent_value'] = pd.to_numeric(pd.Series(df['Sent']).str.extract(r'(\d+)')[0])
df['RSSI_value'] = pd.to_numeric(pd.Series(df['RSSI']).str.extract(r'(\d+)')[0])
df = df[['Sent_value', 'RSSI_value']]

# Escribe las columnas en un Excel
df.to_excel('datos_excel.xlsx', index=False)