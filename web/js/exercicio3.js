/* Crie um programa que receba (via variável) um número de 1 a 7 e exiba o dia da semana correspondente usando switch.*/

let num = Number(prompt("Digite um numero de 1 a 7: "));

switch(num){
    case 1:
        console.log("Domingo");
        break;
    case 2:
        console.log("Segunda-feira");
        break;
    case 3:
        console.log("Terça-feira");
        break;
    case 4:
        console.log("Quarta-feira");
        break;
    case 5: 
        console.log("Quinta-feira");
        break;
    case 6:
        console.log("Sexta-feira");
        break;
    case 7:
        console.log("Sábado");
        break;
}