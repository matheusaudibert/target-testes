// Questao 1

#include <iostream>

using namespace std;

int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
        cout << SOMA << endl;
    }

    cout << "SOMA = " << SOMA << endl;

    // Aqui, a variavel SOMA, tera o valor de 91, porque voce esta fazendo SOMA + K, ao inves de SOMA++;
    // A nova passagem no laco a eh atribuido o valor de K, mais o valor de SOMA a varivel SOMA
    // O fluxo eh 1, 3, 6, 10, 15, 21 ... 91

    return 0;
}
