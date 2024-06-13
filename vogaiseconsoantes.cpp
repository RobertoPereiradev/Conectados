#include <iostream>
#include <string>

using namespace std;
string vogal;
string consoante;

int main() {
    string a; // é tipo um vector, não tem tamanho definido (o que é muito bom)
    cin >> a;
    for(int i = 0; a.size() > i; i++) {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
            vogal += a[i]; //coloco as vogais em um array
        } else {
            consoante += a[i]; //coloco as consoantes em um array
        }
    }
    cout << "Vogais: " << vogal << endl;
    cout << "Consoantes: " << consoante << endl;

    return 0;
}