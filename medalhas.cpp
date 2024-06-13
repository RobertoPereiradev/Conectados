#include <iostream>

using namespace std;

int main() {
    int t1 = 0;
    int t2 = 0;
    int t3 = 0;
    cin >> t1 >> t2 >> t3;
    if (t1 < t2) {
        if (t1 < t3) {
            cout << 1 << endl;
            if (t2 < t3) {
                cout << 2 << endl << 3 << endl;
            } else {
                cout << 3 << endl << 2 << endl;
            }
        } else {
            cout << 3 << endl << 1 << endl << 2 << endl;
        }
    } else if (t2 < t3) {
        cout << 2 << endl;
        if (t1 < t3) {
            cout << 1 << endl << 3 << endl;
        } else {
            cout << 3 << endl << 1 << endl;
        }
    } else {
        cout << 3 << endl << 2 << endl << 1 << endl;
    }
}