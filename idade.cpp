#include <iostream>

using namespace std;

int main() {
    int m, a, b, c;
    cin >> m >> a >> b;
    c = m-a-b;
    if (c > a) {
        if (c > b) {
            cout << c;
        } else {
            cout << b;
        }
    } else {
        if (a > b) {
            cout << a;
        } else {
            cout << b;
        }
    }
    
    return 0;
}