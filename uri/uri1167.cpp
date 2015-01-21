#include <iostream>
#include <list>
using namespace std;

struct c {
    string nome;
    int val;
};

int main() {
    int n;
    while (cin >> n, n) {
        cin.ignore(256, '\n');
        list<c> l;
        for (int i = 0; i < n; ++i) {
            string s;
            int x;
            cin >> s >> x;
            cin.ignore(256, '\n');
            c k = {.nome = s, .val = x};
            l.push_back(k);
        }
        auto it = l.begin();
        int v = -1;
        while (l.size() > 1) {
            if (v == -1) {
                v = it->val;
            }
            if (v % 2 != 0) {
                for (int i = 0; i < v; ++i) {
                    ++it;
                    if (it == l.end()) it = l.begin();
                }
            } else {
                for (int i = 0; i < v; ++i) {
                    if (it == l.begin()) it = l.end();
                     --it;
                }
            }
            auto it2 = it;
            v = it->val;
            if (v % 2 != 0) {
                if (it == l.begin()) it2 = l.end();
                --it2;
            } else {
                ++it2;
                if (it2 == l.end()) it2 = l.begin();
            }
            //cout << it->nome << ' ' << it->val << endl;
            l.erase(it);
            it = it2;
            if (it == l.end()) it = l.begin();
        }
        cout << "Vencedor(a): ";
        cout << l.front().nome << endl;
    }
    return 0;
}
