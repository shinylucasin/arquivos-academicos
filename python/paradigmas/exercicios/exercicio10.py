# A função continue é comumente usada para pular para a próxima iteração do loop.
# Neste caso, estamos pulando o número 6 em uma lista de números.

numeros = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

for numero in numeros:
    if numero == 6:
        print("Número 6 encontrado. Continuando para o próximo.")
        continue # Continua para o próximo número quando o número 6 é encontrado
    print("Número:", numero)