flag = True
while flag:
    entrada = input("Digite algo: ")
    if entrada == "sair":
        flag = False
    else:
        print("Você digitou:", entrada)
print("Fim do programa!")