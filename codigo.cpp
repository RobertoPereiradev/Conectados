#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x1, x2, x3;
    cin >> x1 >> x2;
    int quant = 0;
    for (int i = 3;n>=i; i++) {
        cin >> x3;
        if (x1 == 1 && x2 == 0 && x3 == 0) {
            quant++;
        }
        x1 = x2;
        x2 = x3;
    }
    cout << quant;

    return 0;
}