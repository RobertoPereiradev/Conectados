#include <iostream>

using namespace std;
int n[110];
 // resumo: eu faço um array que possui números dispostos em ordem crescente, do 1 ao N(número de figurinhas) e faço com que esses números sejam preenchidos (o que siginifica troca o número por zero), o preenchimento consiste em receber uma figurinha comprada e preencher o elemento correspondente no array. Ao final, conto a quantidade de elementos que não são zeros (não preenchidos)
int main() {
    int x, m;
    cin >> x;
    for (int i=1; x>=i; i++) {
        n[i] = i;
    }
    cin >> m;
    for (int i = 1; m>=i; i++) {
        int figu;
        cin >> figu;
        n[figu] = 0;
    }
    int quant = 0;
    for (int i=1; x>=i; i++) {
        if (n[i] != 0) {
            quant += 1;
        }
    }
    cout << quant;

    return 0;
}