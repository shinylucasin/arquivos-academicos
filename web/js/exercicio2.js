/*Escreva um script que classifique uma nota armazenada em nota:
>= 7: exibir "Aprovado"
>= 5 e < 7: exibir "Recuperação"
< 5: exibir "Reprovado" */

let nota = Number(prompt("DIgite sua nota: "));
if(nota >= 7){
    console.log("AProvado");
}else if(nota < 7 && nota >= 5){
    console.log("Recuperação");
}else{
    console.log("Reprovado");
}