#include <iostream>

using namespace std;

int main () {
    int n, p, q;
    char c;
    cin >> n >> p >> c >> q;
    if (c == '+') {
        if (p+q <= n) {
            cout << "OK";
        } else {
            cout << "OVERFLOW";
        }
    } else {
        if (p*q <= n) {
            cout << "OK";
        } else {
            cout << "OVERFLOW";
        }
    }
    
    return 0;
}