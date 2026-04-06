import matplotlib.pyplot as plt

x_values = [1,2,3,4,5]
y_values = [1,4,9,16,25]

plt.scatter(x_values, y_values)

# Define o título do gráfico e nomeia os eixos

plt.title("Square numbers", fontsize=24)

plt.xlabel("Value", fontsize=14)

# Define o tamanho dos rótulos das marcações

plt.tick_params(axis='both', labelsize=14)
plt.savefig("grafico2.pdf")