#include <iostream>
#include <cstring>
#include <queue>
#include <set>
using namespace std;

int main() {
    int V, E;
    int ini, ped;
    int m[51][64];
    int lbl[51];
    int teste = 1;
    while(cin >> V >> E >> ini >> ped, !(V == 0 && E == 0 && ini == 0 && ped == 0)) {
        memset(m, 0, sizeof(m));
        memset(lbl, -1, sizeof(lbl));
        for (int i = 0; i < E; ++i) {
            int x, y; cin >> x >> y;
            m[x][y] = m[y][x] = 1;
        }
        queue<int> f;
        f.push(ini);
        cout << "Teste " << teste << endl;
        ++teste;
        set<int> possibru;
        while (!f.empty()) {
            int v = f.front();
            f.pop();
            if (lbl[v] == -1)
                lbl[v] = 0;
            if (lbl[v] == ped) break;
            for (int u = 1; u <= V; ++u) {
                if (m[v][u] && lbl[u] == -1) {
                    lbl[u] = lbl[v] + 1;
                    possibru.insert(u);
                    f.push(u);
                }
            }
        }
        set<int>::iterator it;
        for (it = possibru.begin(); it != possibru.end(); ++it) {
            cout << *it << ' ';
        }
        cout << endl << endl;
    }
    return 0;
}
