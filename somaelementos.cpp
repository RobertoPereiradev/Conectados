#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    int r = 0;
    for (int i = 1; i <= x; i++) { //escopo de i é o do loop
        int y;
        cin >> y;
        r += y;
    }
    cout << r;
}