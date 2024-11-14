#include <bits/stdc++.h>

using namespace std;

/* Macro para código mais rápido e para \n */
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

/* Macros diversas */
#define pb push_back
#define vi vector<int>
#define dgb(x) cout << #x << " = " << x << endl;

typedef long long ll;

int main() { _
    vector<double> faturamento = {100.5, 200.3, 0.0, 450.6, 123.9, 0.0, 310.2, 480.1, 150.4, 0.0};

    double menorValor = DBL_MAX;
    double maiorValor = DBL_MIN;
    double somaFaturamento = 0.0;
    int diasComFaturamento = 0;

    for (double valor : faturamento) {
        if (valor > 0) {
            menorValor = min(menorValor, valor);
            maiorValor = max(maiorValor, valor);
            somaFaturamento += valor;
            diasComFaturamento++;
        }
    }

    double mediaMensal = somaFaturamento / diasComFaturamento;

    int diasAcimaDaMedia = 0;
    for (double valor : faturamento) {
        if (valor > mediaMensal) {
            diasAcimaDaMedia++;
        }
    }

    cout << "Menor valor de faturamento: " << menorValor << endl;
    cout << "Maior valor de faturamento: " << maiorValor << endl;
    cout << "Nº de dias com faturamento acima da média: " << diasAcimaDaMedia << endl;

    return 0;
}