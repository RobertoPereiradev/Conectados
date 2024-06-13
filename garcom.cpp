#include <iostream>

using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    for(int i = 1;n>=i;i++) {
        int l, c;
        cin >> l >> c;
        if (l>c) {
            x += c;
        }
    }
    cout << x << endl;
    
    return 0;
}