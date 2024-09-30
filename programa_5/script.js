const elemento_barra = document.querySelector(".progress-bar");
const btn = document.querySelectorAll(".buttons button")
const btn_avancar = document.querySelector("#avancar");
const btn_voltar = document.querySelector("#voltar");

let taxa = 0;


/*



function mudar(a) {
    if(a==1) {
        if(taxa < 100) taxa += 10;
    } else {
        if(taxa > 0) taxa -= 10;
    }
    elemento_barra.style.width = taxa + "%";
}

btn_avancar.addEventListener("click", function() {
    mudar(1);
});

btn_voltar.addEventListener("click", function() {
    mudar(0);        !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! Aqui eu não posso escrever btn_voltar.addEventListener("click", mudar(0)); porque quando o js ver isso ele já vai executar mudar(0) e o valor retornado(que vai ser undefined) vai sempre ficar no lugar de mudar(0) 
});

*/

btn.forEach((item) => {
    item.addEventListener("click", () => {
        if(item.getAttribute("id")==="avancar"){
            if(taxa < 100) taxa += 10;
        }  else {
            if(taxa > 0) taxa -= 10;
        } 
        elemento_barra.style.width = taxa + "%";
    });
});

/*



function aumentar() {
    if(taxa < 100) taxa += 10;
    elemento_barra.style.width = taxa + "%";
}

function diminuir() {
    if(taxa > 0) taxa -= 10;
    elemento_barra.style.width = taxa + "%";
}

btn_voltar.addEventListener("click", diminuir); aqui não há erro porque não está escrito diminuir() e na outra linha aumentar()
btn_avancar.addEventListener("click", aumentar);

*/

