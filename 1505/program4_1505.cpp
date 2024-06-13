#include <iostream>

using namespace std;

int main() {
    int quant;
    cout << "São quantas disciplinas?" << endl;
    cin >> quant;
    float tabela[quant];
    cout << "Quais são as notas?" << endl;
    float soma = 0;
    for(int i = 1;quant>=i; i++) {
        cin >> tabela[i-1];
        soma += tabela[i-1];
    }

    cout << "A média final é igual a: " << soma/quant;

    return 0;
}