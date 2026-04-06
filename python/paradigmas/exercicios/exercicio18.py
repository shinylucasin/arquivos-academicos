# Criando um dicionário com outros dicionários
dispositivos = {
    "teclado": {
        "marca": "Logitech",
        "modelo": "K120"
    },
    "mouse": {
        "marca": "Microsoft",
        "modelo": "Basic Optical Mouse"
    },
    "impressora": {
        "marca":"HP",
        "modelo": "DeskJet 2720"
    }
}

# Acessando valores dentro do dicionário
print(dispositivos["teclado"]["marca"]) # Output: Logitech
print(dispositivos["mouse"]["modelo"]) # Output: Basic Optical Mouse