// 1) A resposta final da SOma é 91

// 2)

#include <bits/stdc++.h>

using namespace std;

/*macro para código mais rapido e para \n*/
#define _ ios_base::sync_with_stdio(0);cin.tie(0); //n usar printf junto com cout
//^comentar _ para degubar código
#define endl '\n'


/* macro aleatorias */
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>

#define printv(a) do {                             \
    for (size_t i = 0; i < (a).size(); ++i) {      \
        cout << (a)[i];                            \
        if (i < (a).size() - 1)                    \
            cout << " ";                           \
    }                                              \
    cout << endl;                                  \
} while(0)

#define printv2(a) do {                            \
    for (auto x : (a))                             \
        cout << x << endl;                         \
} while(0)

#define print_matrix(m, l, c) do {                 \
    for (int i = 0; i < (l); ++i) {                \
        for (int j = 0; j < (c); ++j) {            \
            cout << (m)[i][j] << " ";              \
        }                                          \
        cout << endl;                              \
    }                                              \
} while(0)


/* macro para trabalhar com pair*/
#define f first
#define s second

/* funcao para debugging*/
#define dgb(x) cout << #x << " = " << x << endl;

/* define long long como ll */
typedef long long ll;


/* define constantes infinitas */
//const int INF = 0x3f3f3f3f;
//const ll LINF = 0x3f3f3f3f3f3f3f3fll;

unordered_map<int, bool> memo;

bool fib(int n) {

    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    if (n == 0) return memo[n] = false;
    if (n == 1) return memo[n] = true;
    int a = 0, b = 1;
    while (b < n) {
        int c = a + b;
        a = b;
        b = c;
    }

    memo[n] = (b == n);
    
    return memo[n];
}

int main() { _

	int n; cin >> n;

    if (fib(n)) {
        cout << "O numero esta na sequencia!" << endl;
    } else {
        cout << "O numero nao esta na sequencia!" << endl;
    }

	return 0;
}