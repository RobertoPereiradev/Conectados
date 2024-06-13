#include <iostream>

using namespace::std;

int main() {
    cout << "Nome do aluno(a)";
    int nome;
    cin >> nome;
    cout << "Notas:";
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int media = (a1+a2+a3)/3;
    if (media < 5) {
        cout << nome << " reprovado(a)!";
    } else if (media <= 6) {
        cout << nome << " sujeito(a) a recuperação!";
    } else {
        cout << nome << " aprovado(a)!";
    }
    
    return 0;
}