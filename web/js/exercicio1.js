/*Crie um programa que verifique se uma pessoa é maior ou menor de idade, com base no valor de uma variável idade, e exiba a mensagem correspondente no console. */

let idade = Number(prompt("Qual sua idade: "));
if (idade < 18){
    console.log("Você é menor de idade");
}else if(idade >= 18){
    console.log("Você é maior de idade");
}