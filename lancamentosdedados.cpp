#include <iostream>

using namespace std;
int face[20];

int main() {
    int quant;
    cin >> quant;
    for (int i = 1; quant >= i; i++) {
        int num;
        cin >> num; //coloco as quantidades de vezes que saiu determinada face na posição do array com o mesmo número da face
        face[num] += 1;
    }
    int maior = 0;
    for (int i = 1; 12 >= i; i++) {
        if (face[i] > maior) {
            maior = face[i]; //acho a quantidade de vezes que a face mais tirada teve
        }
    }
    for (int i = 1; 12 >= i; i++) {
        if (face[i] == maior) {
            cout << i << ' '; // procuro todas as faces que tiveram esse maior valor achado
        }
    }

    return 0;
}