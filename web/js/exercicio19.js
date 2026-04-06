// Dado um array de números, exiba apenas os números maiores que 10 no console, utilizando uma estrutura de repetição e condição.

let numeros = [3, 12, 7, 25, 10, 18, 4];

for (let i = 0; i < numeros.length; i++) {
    if (numeros[i] > 10) {
        console.log(numeros[i]);
    }
}