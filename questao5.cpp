#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "Digite uma string para inverter: ";
    string entrada;
    getline(cin, entrada);


    int comprimento = entrada.length();
    for (int i = 0; i < comprimento / 2; ++i) {
        char aux = entrada[i];
        entrada[i] = entrada[comprimento - i - 1];
        entrada[comprimento - i - 1] = aux;
    }

    cout << "String invertida: " << entrada << endl;

    return 0;
}
