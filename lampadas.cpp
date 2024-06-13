#include <iostream>

using namespace std;

int main() {
    bool a = false, b = false;
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++) {
        int val;
        cin >> val;
        a = !a;
        if (val != 1) {
         b = !b;   
        }
    }
    cout << a << endl << b;
    
    return 0;
}