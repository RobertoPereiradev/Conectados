#include <iostream>

using namespace std;
int a[15], b[15];

int main() {
    int quanta = 0, quantb = 0;
    for (int i = 1; 10 >= i; i++) {
        int num;
        cin >> num;
        if (num%2 == 0) {
            quanta += 1; //coloco os numeros em posições consecutivas em um determinado array dependendo de sua paridade
            a[quanta] = num;
        } else {
            quantb += 1;
            b[quantb] = num;
        }
    }
    for (int i = 1; quanta >= i ; i++) {
        cout << a[i] << ' '; // escrevo os pares
    }
    cout << endl;
    for (int i = 1; quantb >= i ; i++) {
        cout << b[i] << ' '; // escrevo os impares
    }

    return 0;
}