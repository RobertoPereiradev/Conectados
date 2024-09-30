const elemento_form = document.querySelector("form") //o form tem a caracteristica de dizer se algo foi enviado por meio de um botão do tipo submit
const elemento_nome = document.querySelector("#nome")
const elemento_email = document.querySelector("#email")
const elemento_assunto = document.querySelector("#assunto")
const elemento_mensagem = document.querySelector("#mensagem")
const erros = document.querySelectorAll(".erro")

elemento_form.addEventListener("submit", (event) => {
    event.preventDefault();
    limpar();
    validar();
});

function limpar() { //retiro a mensagem de erro e depois valido se as respotas cumprem com os requisitos
    erros.forEach((espaço) => {
        espaço.innerText = "";
    })
    elemento_nome.parentElement.classList.remove("erro"); //ainda existe, mas fora
    elemento_email.parentElement.classList.remove("erro");
    elemento_assunto.parentElement.classList.remove("erro");
    elemento_mensagem.parentElement.classList.remove("erro");
}

function validar() {
    const nome = elemento_nome.value.trim(); // value.trim() remove espaços em branco do início e do final de uma string
    const email = elemento_email.value.trim();
    const assunto = elemento_assunto.value.trim();
    const mensagem = elemento_mensagem.value.trim();

    if(nome === "") {
        colocar_erro(elemento_nome, "Nome não pode estar em branco!")
    }
    if(email === "") {
        colocar_erro(elemento_email, "E-mail não pode estar em branco!")
    } else if (!email_valid(email)) {
        colocar_erro(elemento_email, "E-mail inválido!")
    }
    if(assunto === "") {
        colocar_erro(elemento_assunto, "Assunto não pode estar em branco!")
    }
    if(mensagem === "") {
        colocar_erro(elemento_mensagem, "Mensagem não pode estar em branco!")
    }
}

function colocar_erro(input, mensagem_de_erro) {
    input.nextElementSibling.innerText = mensagem_de_erro; // vai para aquela div erro
    input.parentElement.classList.add("erro");
}

function email_valid(email_valid) {
    return /^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(email_valid) //regex, há três grupos [^\s@], eles se validam se encontram um caractere (um ou mais) que não sejam espaço em branco ou arrobas. Entre um grupo e outro mostra o que deve haver entre eles
}