#include <iostream>

using namespace std;
int a[10];

int main() {
    int acertos = 0;
    for(int i = 1; 6>=i; i++) {
        cin >> a[i]; //guardo os valores
    }
    for(int i = 1; 6>=i; i++) {
        int valor;
        cin >> valor;
        for(int i = 1; 6>=i; i++) {
            if(a[i] == valor) acertos++; // vejo se o número sorteado foi escolhido e se for aumento a viriável "acertos"
        }
    }
    switch (acertos) //percebo em qual situação é a melhor e mando imprimir a palavra correspondente
    {
    case 3:
        cout << "terno";
        break;
    
    case 4:
        cout << "quadra";
        break;
    
    case 5:
        cout << "quina";
        break;
    
    case 6:
        cout << "sena";
        break;
    
    default:
        cout << "azar";
        break;
    }

    return 0;
}