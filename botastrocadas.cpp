#include <iostream>

using namespace std;
int d[70], e[70];

int main() {
    int rep, tam, vezes = 0;
    char lado;
    cin >> rep;
    for(int i=1; i<=rep; i++) { //guarda a quantidade de botas em cada tamanho e lado
        cin >> tam >> lado;
            if(lado=='D') { //se for LADO D
                d[tam] += 1;
            }else {
                e[tam] += 1;// se for LADO E
            }
    }
    for(int i=30; i<=60; i++) { //calcula a quantidade de par de botas que podem ser formados
        while(d[i] != 0 && e[i] != 0) { //se pode ser feito mais um par ele considera isso e depois retira esse par dos arrays
            vezes++;
            d[i]--;
            e[i]--;
        }
    }

    cout << vezes;

    return 0;
}