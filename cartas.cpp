#include <iostream>

using namespace std;

int main () {
    int m, n, o;
    cin >> m >> n >> o;
    if (m==n) {
        cout << o;
    } else {
        if (m==o) {
            cout << n;
        } else {
            cout << m;
        }
    }
    
    return 0;
}