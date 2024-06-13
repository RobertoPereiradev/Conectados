#include <iostream>
#include <string>

using namespace::std;

int main() {
    int quant;
    cout << "Quantas consultas?" << endl;
    cin >> quant;
    string a[quant];
    for (int i = 1; quant >= i; i++) {
        a[i-1] = 'N';
    }
    int t = 0;
    string resp;
    while (t == 0) {
        for (int i = 1; quant >= i; i++) {
            cout << "Marcar na " << i << "º consulta? (S ou N)" << endl;
            cin >> resp;
            if ("S" == resp) {
                if (a[i-1] == "N") {
                    cout << "Quem?" << endl;
                    cin >> a[i-1];
                } else {
                    cout << "Ocupado! " <<  a[i-1] << " Ocupa esse horário!" << endl;
                }
            }
        }
        cout << "Tudo certo? (S = 1 e N = 0)" << endl;
        cin >> t;
    }
return 0;
}