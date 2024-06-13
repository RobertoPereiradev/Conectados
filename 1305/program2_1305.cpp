#include <iostream>

using namespace::std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x > 10) {
        cout << "X é maior que 10";
    } else {
        cout << "X é menor que 10";
    }
    cout << endl;
    if (y > 10) {
        cout << "Y é maior que 10";
    } else {
        cout << "Y é menor que 10";
    }
    cout << endl;
    if (x+y > 10) {
        cout << "A soma entre ambos é maior que 10";
    } else {
        cout << "A soma entre ambos é menor que 10";
    }
    cout << endl;

    return 0;
}