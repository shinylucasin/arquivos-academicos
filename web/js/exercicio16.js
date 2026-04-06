// Dado um array de valores numéricos, crie um programa que encontre e exiba o maior número presente no array.

let numeros = [5, 12, 3, 27, 9, 1, 42, 18]; 

let maior = numeros[0];

for (let i = 1; i < numeros.length; i++) {
    if (numeros[i] > maior) {
        maior = numeros[i];
    }
}

console.log("O maior número do array é:", maior);