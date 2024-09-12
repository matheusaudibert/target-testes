// Não achei nenhum JSON ou XML disponível, portante pedi ao Gemini que me gerasse um JSON.

#include <iostream>
#include <vector>
#include <fstream>
#include "json.hpp"  // Arquivo para portar o json para cpp https://github.com/nlohmann/json
using namespace std;
using json = nlohmann::json;

void calcularFaturamento(const vector<float>& faturamento) {
    float menorFaturamento = faturamento[0];
    float maiorFaturamento = faturamento[0];
    float somaFaturamento = 0.0;

    for (float valor : faturamento) {
        if (valor < menorFaturamento) {
            menorFaturamento = valor;
        }
        if (valor > maiorFaturamento) {
            maiorFaturamento = valor;
        }
        somaFaturamento += valor;
    }

    float mediaMensal = somaFaturamento / faturamento.size();

    int diasAcimaMedia = 0;
    for (float valor : faturamento) {
        if (valor > mediaMensal) {
            diasAcimaMedia++;
        }
    }

    cout << "Menor valor de faturamento: " << menorFaturamento << endl;
    cout << "Maior valor de faturamento: " << maiorFaturamento << endl;
    cout << "Numero de dias acima da media mensal: " << diasAcimaMedia << endl;
}

int main() {
    ifstream arquivo("faturamento.json");
    json j;
    arquivo >> j;

    vector<float> faturamento;
    for (const auto& item : j["faturamento"]) {
        float valor = item["valor"];
        if (valor > 0.0) {
            faturamento.push_back(valor);
        }
    }

    calcularFaturamento(faturamento);

    return 0;
}
