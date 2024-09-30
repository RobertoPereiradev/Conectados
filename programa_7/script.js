const button = document.querySelector("#btn")
const div_cores = document.querySelector(".cores")

button.addEventListener("click", gerarCor)

function gerarCor() {
    div_cores.innerHTML = "";
    for(let i=0; i < 5; i++) {
        const cor = random_Cor();
        const div_cor = document.createElement("div");
        const p_cor = document.createElement("p");
        div_cor.style.backgroundColor = cor;
        p_cor.innerText = cor;
        p_cor.style.color = cor;
        div_cor.appendChild(p_cor);
        div_cores.appendChild(div_cor);
    }
}

function random_Cor() {  //gera uma cor
    const letra = "0123456789ABCDEF"; //como um array
    let color = "#";
    for(let i=0; i<6;i++) {
        color += letra[Math.floor(Math.random() * 16)] // como o array começa pelo 0, vai de 0 a 15
    }
    return color;
}