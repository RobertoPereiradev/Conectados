#include <iostream>

using namespace std;
int num[100100];

int main() {
    int vezes, posicao = 0;
    cin >> vezes;
    for (int i=1; vezes>=i; i++) {
        int valor;
        cin >> valor;
        if(valor != 0) { //defino sua posição e o coloco dentro do array
            posicao++;
            num[posicao] = valor;
        } else {
            if (posicao != 0) { // se posso voltar para traz faço isso
                posicao--;
            }
        }
    }
    int soma = 0;
    for (int i=1; posicao>=i; i++) { // considero apenas os valores em um dado intervalo (acredito que às vezes um número que não deve ser contado não será substituido, logo considero até onde foi contado)
        soma += num[i];
    }
    cout << soma;

    return 0;
}