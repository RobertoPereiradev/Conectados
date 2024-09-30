
const value_gorjeta = document.getElementById("gorjeta_value")
const value_total = document.querySelector("#total_value")

function calculo_gorjeta() {
    const value_conta = document.getElementById("conta_value").value;
    const quality_service = document.querySelector("#service_qual").value;

    if(value_conta == ""){
        window.alert("Digite o valor!");
        return;
    }

    value_gorjeta.value = (value_conta*quality_service).toFixed(2) //coerção de tipos
    value_total.value = "R$" + (parseFloat(value_conta) + parseFloat(value_gorjeta.value)).toFixed(2) 
}