#include <iostream>

using namespace std;
int a[9][9];

int main() {
    cout << "Quais são os valores da matriz? (Digite começando pela primeira linha e coluna)" << endl;
    for (int i=0; 9>i; i++) {
        for (int j=0; 9>j; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Matriz:" << endl;
    for (int i=0; 9>i; i++) {
        for (int j=0; 9>j; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}