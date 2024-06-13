#include <iostream>

using namespace::std;

int main() {
    cout << "Valor:";
    int val;
    cin >> val;
    if (val <= 100) {
        cout << "5% de desconto, resultando em" << 0.95*val << " reais";
    } else if (val <= 500) {
        cout << "10% de desconto, resultando em" << 0.9*val << " reais";
    } else {
        cout << "25% de desconto, resultando em" << 0.75*val << " reais";
    }

    return 0;
}