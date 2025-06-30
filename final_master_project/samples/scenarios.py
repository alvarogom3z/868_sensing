import subprocess

numeros = ["1", "2", "05", "15", "075", "ideal"]

for i in numeros:
    comando = f"python3 ../../results.py {i}_results.xlsx {i}.png"
    subprocess.run(comando, shell=True)
