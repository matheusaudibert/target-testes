#include <iostream>
#include <iomanip> 
#include <map>
#include <string>

using namespace std;

int main() {

    map<string, float> faturamento = {
        {"SP", 67836.43},
        {"RJ", 36678.66},
        {"MG", 29229.88},
        {"ES", 27165.48},
        {"Outros", 19849.53}
    };

    float totalFaturamento = 0.0;
    for (const auto& pair : faturamento) {
        totalFaturamento += pair.second;
    }

    cout << fixed << setprecision(2);
    cout << "Percentual de representacao de cada estado:" << endl;
    for (const auto& pair : faturamento) {
        float percentual = (pair.second / totalFaturamento) * 100;
        cout << pair.first << ": " << percentual << "%" << endl;
    }

    return 0;
}
