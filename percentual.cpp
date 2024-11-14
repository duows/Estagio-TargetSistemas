// • SP – R$67.836,43
// • RJ – R$36.678,66
// • MG – R$29.229,88
// • ES – R$27.165,48
// • Outros – R$19.849,53

/* Escreva um programa na linguagem que
 desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.  */

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
    
    vector<double> faturamento = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    vector<string> estados = {"SP", "RJ", "MG", "ES", "Outros"};

    double somaFaturamento = 0.0;
    for (double valor : faturamento) {
        somaFaturamento += valor;
    }

    for (int i = 0; i < faturamento.size(); i++) {
        double percentual = (faturamento[i] / somaFaturamento) * 100;
        cout << "Percentual de " << fixed << setprecision(2) << percentual << "% para o " << estados[i] << endl;
    }

    return 0;
}