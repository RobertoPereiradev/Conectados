#include <iostream>

using namespace::std;

int main() {
    cout << "Escreva o número:";
    int x;
    cin >> x;
    if (x%2 != 0) {
        cout << "Número impar";
    } else {
        cout << "Número par";
    }


    return 0;
}