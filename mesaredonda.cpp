#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a%3 == b%3) cout << (a-1)%3; else if(a%3 + b%3 == 3) cout << 0; else if(a%3 + b%3 == 1) cout << 2; else cout << 1;
 //se derem na mesma cadeira, Clara senta na próxima posição horária a de Ana, logo uma atras de Ana. Se Ana e Clara não sentarem em 0 temos a soma de suas posições igual a 3; se não sentarem em 2, a soma é 1; se não sentarem 2, a soma é 1.
    return;
}