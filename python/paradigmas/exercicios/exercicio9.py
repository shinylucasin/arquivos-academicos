# A função break é comumente usada para interromper o loop.
# Neste caso, estamos procurando o número 6 em uma lista de números.

numeros = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

for numero in numeros:
    if numero == 6:
        print("Número 6 encontrado. Encerrando o loop.")
        break  # Encerra o loop quando o número 6 é encontrado
    print("Número:", numero)