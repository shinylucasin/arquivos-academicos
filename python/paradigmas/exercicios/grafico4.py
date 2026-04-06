import csv

import matplotlib.pyplot as plt

# --- Configurações Iniciais ---
# Use barras normais (/) para compatibilidade de caminho
filename = 'paradigmas/outros/climajulho2014.csv'
highs = []

# --- Leitura e Processamento dos Dados ---
try:
    # Abre o arquivo CSV em modo de leitura
    with open(filename, encoding='utf-8') as f:
        reader = csv.reader(f)
        header_row = next(reader) # Pula a linha de cabeçalho
        
        # Itera sobre as linhas de dados
        for row in reader:
            try:
                # Converte o valor da temperatura (índice 1) para inteiro e armazena
                high = int(row[1]) 
                highs.append(high)
            except ValueError:
                # Trata dados que não são números (vazios ou texto)
                print(f"Valor inválido na linha {reader.line_num}. Ignorando.")
                highs.append(None) 
            except IndexError as e:
                # Trata linhas incompletas
                print(f"Erro: {e} - Linha incompleta em {reader.line_num}")
                highs.append(None)

except FileNotFoundError:
    print(f"ERRO: O arquivo '{filename}' não foi encontrado.")
    highs = []

# --- Geração do Gráfico ---

if highs: # Verifica se há dados para plotar
    plt.plot(highs, c='red')
    
    # Configura rótulos e título
    plt.title("Temperatura Máxima Diária, Julho 2014", fontsize=20)
    plt.xlabel("Dia do Mês", fontsize=16) 
    plt.ylabel("Temperatura (°F)", fontsize=16)
    plt.tick_params(axis='both', labelsize=10)
    
    # Salva o gráfico em PDF
    plt.savefig("relatorioclima.pdf")
    print("\nGráfico salvo com sucesso em relatorioclima.pdf")
else:
    print("\nNão foi possível gerar o gráfico.")