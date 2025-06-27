import pandas as pd

def excel_to_csv(input_excel, output_csv):
    df = pd.read_excel(input_excel)
    
    df['combined'] = df.apply(lambda row: f"{int(row['Sent_value'])},{int(row['RSSI_value'])},{int(row['ETIQUETADO'])}", axis=1)
    #df['combined'] = df.apply(lambda row: f"{int(row['Sent_value'])},{int(row['RSSI_value'])}", axis=1)

    df[['combined']].to_csv(output_csv, index=False, header=False)

if __name__ == "__main__":
    input_excel_file = "test.xlsx"
    output_csv_file = "test.csv"
    excel_to_csv(input_excel_file, output_csv_file)

    print(f"DONE!")
