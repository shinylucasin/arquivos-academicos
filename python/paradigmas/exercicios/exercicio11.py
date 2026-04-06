# Criando uma lista de números
numeros = [23, 10, 5, 42, 7, 18, 35]

# Acessando elementos da lista
primeiro_numero = numeros[0]
terceiro_numero = numeros[2]

# Alterando um elemento da lista
numeros[1] = 15

# Acrescentando elementos à lista
numeros.append(30)
numeros.insert(2, 12)

# Removendo elementos da lista
numeros.remove(7)
numeros.pop()  # Remove o último elemento

# Ordenando a lista
numeros.sort()

# Gerando a lista em ordem inversa
numeros_inversos = list(reversed(numeros))

# Exibindo a lista ordenada
print("Números ordenados na lista:")
for numero in numeros:
    print(numero)

# Usando um loop para iterar a lista
print("Números inversos na lista:")
for numero in numeros_inversos:
    print(numero)

# Usando a função range para criar uma lista de números
numeros_pares = list(range(2, 21, 2)) # Números pares de 2 a 20
print("Números gerados pelo range:")
for numero in numeros_pares:
    print(numero)

# Funções estatísticas usando a lista de números
soma = sum(numeros)
media = soma / len(numeros)
maior_numero = max(numeros)
menor_numero = min(numeros)

print("\nEstatísticas:")
print("Soma:", soma)
print("Média:", media)
print("Maior número:", maior_numero)
print("Menor número:", menor_numero)