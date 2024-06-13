#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(2);
    for(int i=1;n>i; i++) {
        char tipo;
        int num;
        cin >> tipo >> num;
        if (tipo == 'R' || tipo == 'E') {
            a[1].push_back (1);
            a[0].push_back (num);
        } else {
            a[1].push_back(num);
        }
    }
    vector<int> b, c;
    for(int i=1;n>i; i++) {
        if(find(b.begin(), b.end(), a[0][i-1]) == b.end()) {
            b.push_back(a[0][i-1]);
        }
    }
    sort(b.begin(), b.end());
    

    return 0;
}