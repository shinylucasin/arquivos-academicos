/*Dado um array de números inteiros, crie um programa que conte quantos números são pares e exiba essa quantidade no console. */

let numeros = [2, 7, 8, 15, 22, 31, 40, 3];

let quantidadePares = 0;

for (let i = 0; i < numeros.length; i++) {
    if (numeros[i] % 2 === 0) {
        quantidadePares++;
    }
}

console.log("Quantidade de números pares:", quantidadePares);