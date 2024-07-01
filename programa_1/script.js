const input = document.querySelector("#input");
const resul = document.querySelector("#resul");
const para = document.querySelector("#para");
const de = document.querySelector("#de");
const converterbutton = document.querySelector("#converter");
const mensagem = document.querySelector("#mensagem");

function converter() {
    const devalor = de.value;
    const paravalor = para.value;
    if(devalor === paravalor) {
    resul.value = input.value;
    mensagem.textContent = "";
    return;
    }
    let unidentrada;
    switch(devalor) {
        case "mm":
            unidentrada = input.value/1000
            break;
        case "cm":
            unidentrada = input.value/100
            break;
        case "dm":
            unidentrada = input.value/10
            break;
        case "mm":
            unidentrada = input.value
            break;
        case "km":
            unidentrada = input.value*1000
            break; 
    }
    switch(paravalor) {
        case "mm":
            unidentrada = unidentrada*1000
            break;
        case "cm":
            unidentrada = unidentrada*100
            break;
        case "dm":
            unidentrada = unidentrada*10
            break;
        case "mm":
            unidentrada = unidentrada
            break;
        case "km":
            unidentrada = unidentrada/1000
            break; 
    }
    resul.value = unidentrada;
    const de_label = de.options[de.selectedIndex].text;
    const para_label = para.options[para.selectedIndex].text;
    mensagem.textContent = `${input.value} ${de_label} equivalem a ${unidentrada} ${para_label}`;
    return;
}

converterbutton.addEventListener("click", converter)