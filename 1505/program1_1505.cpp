#include <iostream>

using namespace std;
int a[2][2], b[2][2], ab[2][2];

int main() {
    cout << "Quais são os valores da primeira matriz? (Digite começando pela primeira linha e coluna)" << endl;
    for (int i=0; 2>i; i++)  {
        for (int j=0; 2>j; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Quais são os valores da segunda matriz? (Digite começando pela primeira linha e coluna)" << endl;
    for (int i=0; 2>i; i++) {
        for (int j=0; 2>j; j++) {
            cin >> b[i][j];
        }
    }
    for (int i=0; 2>i; i++) {
        for (int j=0; 2>j; j++) {
            ab[i][j] = a[i][j] + b[i][j];
            cout << ab[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}