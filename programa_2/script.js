function update () {
    const horas = document.querySelector(".horas");
    const minutos = document.querySelector(".minutos");
    const segundos = document.querySelector(".segundos");

    const now = new Date() // função que dele se retira muitas informações de tempo. como horas, minutos, segundos, dias da semana, fuso horário, ...
    horas.textContent = now.getHours().toString().padStart(2, "0"); //to localestring muda essa informação tendo como base a forma que o país escolhido trabalha com ela/ padstart completa a string em N vezes colocando um caractere especifico
    minutos.textContent = now.getMinutes().toString().padStart(2, "0");
    segundos.textContent = now.getSeconds().toString().padStart(2, "0");

    return 0;
}

setInterval(update, 1000) // faz com a função seja repetida entre um intervalo de tempo