salario = int(input("Informe o salário recebido: "))
despesas = int(input("Informe o gasto em despesas: "))

if despesas <= salario:
    print("Gastos dentro do orçamento.")
else:
    print("Orçamento estourado.")