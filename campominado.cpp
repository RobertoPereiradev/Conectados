#include <iostream>

using namespace std;
int a[70];

int main() {
    int tam;
    cin >> tam;
    for (int i=1; tam >= i; i++) {
        cin >> a[i];
    } // guardo
    for (int i=1; tam >= i; i++) {
        cout << a[i-1] + a[i] + a[i+1] << endl;
    } // escrevo. Tentei criar um vetor que fizesse isso e também um esboço de código que calculasse na hora o valor e guardava. Não pensei que eu não precisava ter um vetor com o resultado. Percebi que só tenho que mostrar o resultado e nada mais

    return 0;
}