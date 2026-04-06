salario = int(input("Informe o salário atual: "))
reajuste = int

if salario << 500:
    reajuste = 15/100
elif salario >= 500 <= 1000:
    reajuste = 10/100
else:
    reajuste = 5/100

print("Salário novo: ",salario+(salario*reajuste))