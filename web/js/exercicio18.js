// Crie uma variável tipoUsuario que pode assumir os valores "admin", "aluno" ou outro texto qualquer. Utilize switch para exibir: "Acesso total", "Acesso limitado" ou "Tipo desconhecido".

let tipoUsuario = "admin";

switch (tipoUsuario) {
    case "admin":
        console.log("Acesso total");
        break;

    case "aluno":
        console.log("Acesso limitado");
        break;

    default:
        console.log("Tipo desconhecido");
        break;
}