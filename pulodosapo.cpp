#include <iostream>
#include <vector>

using namespace std;

int main() {
    int pedras, sapos;
    cin >> pedras >> sapos;
    vector<int> a(pedras+1); //como o vector começa pela posição 0 e no código só é considerado a partir da posição 1, tive que aumenta lo em uma posição
    for(int i = 1; i <= sapos; i++) {
        int posini, dist;
        cin >> posini >> dist;
        a[posini] = 1; //a posição inicial é sempre considerada
        int x = posini;
        while (x+dist<=pedras) //insero as posições com pulos para frente
        {
            x += dist;
            a[x] = 1;
        }
        x = posini;
        while (x-dist>0) //insero as posições com pulos para frente
        {
            x -= dist;
            a[x] = 1;
        }
    }
    for(int i = 1; i <= pedras; i++) cout << a[i] << endl; //imprimo todas as posições

    return 0;
}