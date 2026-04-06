
nome = str(input("Digite o seu nome: "))
fone = int(input("Digite o fone: "))
endereco = str(input("Digite seu endereço: "))
nomep = str(input("Digite o nome do produto: "))
quant = int(input("Digite a quantidade: "))
valoruni = float(input("Digite o valor unitário: "))
valortotal = quant * valoruni
valordesconto = 10/100 * valortotal

print("----Mercadinho----")
print("  ")
print("Nome:",nome)
print("Fone:",fone)
print("Endereço:",endereco)
print("Produto:",nomep)
print("Quantidade:",quant)
print("Valor unitário:",valoruni)
print("Valor total:",valortotal)
print("Valor real com desconto:",valordesconto)