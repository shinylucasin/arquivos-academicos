# Criar um dicionário vazio
d = {}

# Adicionar itens ao dicionário
d["nome"] = "Ana"
d["idade"] = 25
d["profissão"] = "médica"

# Acessar um valor pela sua chave
print(d["nome"]) # Ana

# Alterar um valor pela sua chave
d["idade"] = 26

# Remover um item pela sua chave
del d["profissão"]

# Imprimir todo o dicionário
print(d) # {'nome': 'Ana', 'idade': 26}