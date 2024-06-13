#include <iostream>

using namespace std;
int fita[10100], esq[10100], dir[10100];

int main() {
    int n;
    cin >> n;
    esq[n+1] = 999999999;
    dir[0] = 999999999;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        fita[i] = num;
    }
    for (int i = 1; i <= n; i++)
    {
        if(fita[i]==0) {
            dir[i] = 0;
        } else {
            dir[i] = dir[i-1] + 1;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        if(fita[i]==0) {
            esq[i] = 0;
        } else {
            esq[i] = esq[i+1] + 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(esq[i]>dir[i]) {
            if (dir[i] <=9) cout << dir[i] << ' '; else cout << 9 << ' ';
        } else {
            if (esq[i] <=9) cout << esq[i] << ' '; else cout << 9 << ' ';
        }
    }

    return 0;
}