#include <iostream>

using namespace std;

int main () {
    int n, m = 0;
    cin >> n;
    for(int i=1;i<=n;i++) {
        int a;
        cin >> a;
        m += a;
        if (m>=1000000) {
            cout << i;
            break;
        }
    }
        
    return 0;
}