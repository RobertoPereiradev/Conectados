const cpf_text = document.getElementById("cpf_text")
const btn_gerar = document.getElementById("gerar")
const btn_copiar = document.getElementById("copiar")

btn_gerar.addEventListener("click", gerar_cpf);
btn_copiar.addEventListener("click", copiar_cpf);

function gerar_cpf() {
    let num_base =  (Math.floor(Math.random() * 999999999) + 1);
    num_base = num_base.toString().padStart(9, "0");
    let dv1 = descobrirDv(num_base, 10); //dada a sequência necessita pegar o 1 digito verificador
    let dv2 = descobrirDv(num_base+dv1, 11) //a partir da sequeência e o primeiro digito verificador, é necessário o segundo
    cpf_text.innerText = formatar_cpf(num_base+dv1+dv2)
}

function descobrirDv(tabela, quant) {
    let soma = 0
    for(i = 0; tabela.length > i; i++) {
        soma += parseInt(tabela[i]) * quant--;
    }
    let resto = soma%11;
    return 11-resto < 10 ? 11-resto : 0;
}

function formatar_cpf(cpf) {
    const regex = /^(\d{3})(\d{3})(\d{3})(\d{2})$/ //guarda uma divisão
    return cpf.replace(regex, "$1.$2.$3-$4") //o cpf é mudado e recebe a divisão de regex pelos pontos e traço
}

function copiar_cpf() {
    navigator.clipboard.writeText(cpf_text.innerText).then(
        () => {
            window.alert(`O CPF ${cpf_text.innerText} foi copiado para a áreia de tranferência!`);
        },
        () => {
            window.alert(`O CPF ${cpf_text.innerText} não foi copiado para a áreia de tranferência!`); // pra quê? Eu não sei
        }
    )
}