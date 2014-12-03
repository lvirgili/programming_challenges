#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    int inst = 1;
    while (n--) {
        set<int> linhas[9];
        set<int> colunas[9];
        set<int> quadrados[3][3];
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                int x;
                cin >> x;
                linhas[i].insert(x);
                colunas[j].insert(x);
                quadrados[i/3][j/3].insert(x);
            }
        }
        bool yes = true;
        for (auto &s : linhas) {
            if (s.size() != 9) {
                yes = false;
                break;
            }
        }
        for (auto &s : colunas) {
            if (s.size() != 9) {
                yes = false;
                break;
            }
        }
        for (auto &l : quadrados) {
            for (auto &s : l) {
                if (s.size() != 9) {
                    yes = false;
                    break;
                }
            }
        }
        cout << "Instancia " << inst++ << endl;
        if (yes) cout << "SIM\n\n";
        else cout << "NAO\n\n";
    }
    return 0;
}
