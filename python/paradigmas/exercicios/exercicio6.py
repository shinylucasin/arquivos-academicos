# Toda estrutura de laço tem um contador, que é uma variável que controla o número de vezes que o laço é executado.

contador = 0

while contador < 5:
    print("Contagem:", contador)
    contador += 1 # Incrementa o contador em 1 a cada iteração.
    # contador  = contador + 1 - (Outra forma de incrementar o contador.)

print("Loop (laço) concluído!")

# Caso contrário, o laço pode se tornar infinito, resultando em um loop que nunca termina.