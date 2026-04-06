import pygal

bar_chart = pygal.Bar()
bar_chart.title = 'Vendas por mês - Ano 2023'
bar_chart.x_labels = ['Jan', 'Fev', 'Mar', 'Abr', 'Mai', 'Jun', 'Jul', 'Ago', 'Set', 'Out','Nov', 'Dez']

bar_chart.add('Vendas',[5,7,8,12,15,20,22,23,18,12,6,4])
bar_chart.render_to_file('grafico_colunas.svg')