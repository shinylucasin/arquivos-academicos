// Dado um array numérico, crie um programa que calcule a soma de todos os elementos e exiba o resultado no console.

let numeros = [10, 5, 8, 2, 7];

let soma = 0;

for (let i = 0; i < numeros.length; i++) {
    soma += numeros[i];
}

console.log("A soma de todos os elementos é:", soma);