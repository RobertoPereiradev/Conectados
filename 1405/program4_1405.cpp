#include <iostream>

using namespace std;

int main() {
    int m;
    cout << "Quantos canditados?" << endl;
    cin >> m;
    cout << "Quantos eleitores?" << endl;
    int quant;
    cin >> quant;
    int tabela[m] = {0};
    for (int i = 1; quant >= i; i++) {
        cout << "Digite o número da colocação de seu candidato, exemplo: 0, 1, 2, 3, etc" << endl;
        int voto;
        cin >> voto;
        tabela[voto] += 1;
    }
    int numdvotos = 0, pos;
    for(int i = 0; m > i; i++) {
        if (tabela[i]>numdvotos) {
            numdvotos=tabela[i];
            pos = i;
        }
    }
    cout << "O ganhador foi o candidato " << pos;

    return 0;
}