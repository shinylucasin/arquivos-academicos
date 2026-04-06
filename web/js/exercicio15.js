// Escreva um programa que mostre a tabuada de um número armazenado em uma variável, de 1 até 10, usando for.

let numero = 7;

console.log(`Tabuada do ${numero}:`);

for (let i = 1; i <= 10; i++) {
    console.log(`${numero} x ${i} = ${numero * i}`);
}