import pygal

# Crie um gráfico de colunas
bar_chart = pygal.Bar()

# Adicione dados ao gráfico
bar_chart.add('Mouse',[1450, 3500, 2500, 1000])
bar_chart.add('Teclado',[2000, 2500, 6500, 4300])
bar_chart.add('Monitor',[3000, 2000, 1000, 4000])

# Defina o título do gráfico
bar_chart.title = 'Vendas em (R$) do Primeiro Trimestre de 2024 - Mouse, Teclado, Monitor'

# Defina os rótulos do eixo x e y
bar_chart.x_labels = ['Janeiro', 'Fevereiro', 'Março', 'Abril']
bar_chart.y_labels = [0, 2000, 4000, 6000, 8000]

# Defina a legenda do eixo y
bar_chart.y_title = 'Vendas em R$'

# Renderize o gráfico em um arquivo SVG
bar_chart.render_to_file('grafico_colunas2.svg')