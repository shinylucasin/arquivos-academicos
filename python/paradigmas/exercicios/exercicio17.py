# Definir a superclasse Animal
class Animal:
    # Construtor da superclasse
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    # Método da superclasse
    def fazer_som(self):
        print(f"Eu sou um {self.nome} e eu faço som!")

# Definir a subclasse Cachorro que herda de Animal
class Cachorro(Animal):
    # Construtor da subclasse
    def __init__(self, nome, idade, raca):
        # Chamar o construtor da superclasse
        super().__init__(nome, idade)
        self.raca = raca

    # Sobrescrever o método da superclasse
    def fazer_som(self):
        print(f"Eu sou um {self.nome} da raça {self.raca} e eu faço au au!")

# Criar um objeto da subclasse 
cachorro = Cachorro("Rex", 3, "Labrador")

# Acessar os atributos herdados
print(cachorro.nome)
print(cachorro.idade)

# Chamar o método sobrescrito
cachorro.fazer_som()