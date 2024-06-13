#include <iostream>
#include <vector>

using namespace::std;

int main() {
    vector<vector<int>> a(5, vector<int>(8, 0));
    int i, j, t = 0;
    while (t == 0) {
        cout << "Qual assento? ( linha e depois coluna )" << endl;
        cin >> i >> j;
        if (a[i-1][j-1] != 1) {
            a[i-1][j-1]= 1;
        } else {
            cout << "Ocupado!" << endl;
        }
        cout << "Tudo certo? (S = 1 e N = 0)";
        cin >> t;
    }
    cout << "Mapa:" << endl;
    for (int i = 0; 5>i; i++) {
        for (int j = 0; 8>j; j++) {
            cout << "[" << a[i][j] << "] ";
        }
        cout << endl;
    }
return 0;

}