#include <iostream>

using namespace std;

int main() {
    int n, n1, n2;
    int point = 1, point2 = 0;
    cin >> n >> n1;
    for(int i=1;n > i ; i++) {
        cin >> n2;
        if (n2==n1) {
            point++;
        } else {
            if (point>point2) {
            point2 = point;
            }
            point = 0;
        }
    }
    cout << point2;

    return 0;
}