// Crie um array com alguns nomes. 
// Verifique se um nome específico está presente no array e exiba no console: "Encontrado" ou "Não encontrado".

const nome = [
    {id: 1, nome: "Maria"},
    {id: 2, nome: "João"},
    {id: 3, nome: "Marcos"},
    {id: 4, nome: "Zebadete"},
    {id: 5, nome: "Juninho"}
]

let lista = alert("Nomes disponíveis: Maria, João, Marcos, Zebadete, Juninho");
let nomedesejado = prompt("Pesquise um nome qualquer: ");
const nomeachado = nome.find(item => item.nome.toLowerCase() === nomedesejado.toLowerCase());

if (nomeachado) {
    console.log("Encontrado");
}
else {
    console.log("Não encontrado");
}