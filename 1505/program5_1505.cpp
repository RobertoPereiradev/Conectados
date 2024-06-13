#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tam;
    cout << "Qual o tamanho do tabuleiro? (diga somente apenas o valor de um lado)" << endl;
    cin >> tam;
    vector<vector<vector<int>>> tab(2, vector<vector<int>>(tam, vector<int>(tam, 0))); //cria um vetor de 2posições em cada elemento é um vetor de tamanho tam o qual tem seus elementos vetores de tamanho tam e de valor 0
    cout << "Jogador 1 são quantas peças?" << endl;
    int quant;
    cin >> quant;
    cout << "Posicione-as:" << endl;
    for (int i = 1; quant >=i; i++) {
        int m, n;
        cout << "Diga a linha e depois a coluna:" << endl;
        cin >> m >> n;
        tab[0][m-1][n-1] = 1;
    }
    cout << "Jogador 2 são quantas peças?" << endl;
    cin >> quant;
    cout << "Posicione-as:" << endl;
    for (int i = 1; quant >=i; i++) {
        int m, n;
        cout << "Diga a linha e depois a coluna:" << endl;
        cin >> m >> n;
        tab[1][m-1][n-1] = 1;
    }
    bool t = false;
    int venc = 0;
    while (t == false) {
        cout << "Diga as coordenadas jogador 1!" << endl;
        int m, n, soma = 0;
        cin >> m >> n;
        if (tab[1][m-1][n-1] == 1) {
            cout << "Afundou!" << endl;
            tab[1][m-1][n-1] = 0;
        } else {
            cout << "Nada ocorreu!" << endl;
        }
        for(int i = 1;tam>=i; i++) {
            for (int j = 1; tam>=j; j++) {
                soma += tab[1][i-1][j-1];
            }
        }
        if (soma == 0) {
            venc = 1;
            break;
        }
        cout << "Diga as coordenadas jogador 2!" << endl;
        cin >> m >> n;
        if (tab[0][m-1][n-1] == 1) {
            cout << "Afundou!" << endl;
            tab[0][m-1][n-1] = 0;
        } else {
            cout << "Nada ocorreu!" << endl;
        }
        soma = 0;
        for(int i = 1;tam>=i; i++) {
            for (int j = 1; tam>=j; j++) {
                soma += tab[0][i-1][j-1];
            }
        }
        if (soma == 0) {
            venc = 2;
            break;
        }
    }
    cout << "O vencedor foi o jogador: " << venc;

    return 0;
}