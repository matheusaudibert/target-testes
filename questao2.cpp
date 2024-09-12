#include <iostream>

using namespace std;

bool verificaFib(int num) {
    if (num < 0) return false; 

    int i = 0, a = 1;
    if (num == i || num == a) return true;

    while (a < num) {
        int aux = i + a;
        i = a;
        a = aux;
    }

    return (a == num);
}

int main() {
    int number;

    cout << "Digite um numero para verificar se pertence a sequencia de Fibonacci:";
    cin >> number;

    if (verificaFib(number)) {
        cout << number << " pertence!" << endl;
    } else {
        cout << number << " nao pertence!" << endl;
    }

    return 0;
}