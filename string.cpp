// 5) Escreva um programa que inverta os caracteres de um string.

// IMPORTANTE:
// a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
// b) Evite usar funções prontas, como, por exemplo, reverse;


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
    
    string s = "teste";
    string sInvertida = "";

    for (int i = s.size() - 1; i >= 0; i--) {
        sInvertida += s[i];
    }

    cout << sInvertida << endl;

    return 0;
}