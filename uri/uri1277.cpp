#include <iostream>
#include <string>
using namespace std;

struct people {
    string nome;
    int p, a, t;
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        people v[n];
        cin.ignore(256, '\n');
        for (int i = 0; i < n; ++i) {
            string nome;
            cin >> nome;
            struct people p;
            p.nome = nome;
            p.p = p.a = p.t = 0;
            v[i] = p;
        }
        bool print = false;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            for (auto j = 0u; j < s.size(); ++j) {
                if (s[j] == 'P') ++v[i].p;
                if (s[j] == 'A') ++v[i].a;
            }
            if (1.0 * v[i].p / (v[i].p + v[i].a) < 0.75) {
                if (print) cout << " ";
                print = true;
                cout << v[i].nome;
            }
        }
        cout << endl;
    }
    return 0;
}
