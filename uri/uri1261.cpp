#include <iostream>
#include <string>
#include <map>
#include <sstream>
using namespace std;

int main() {
    int m, n;
    while (cin >> m >> n) {
        map<string, unsigned long long> w;
        for (int i = 0; i < m; ++i) {
            string a;
            unsigned long long b;
            cin >> a >> b;
            cin.ignore(256, '\n');
            w[a] = b;
        }
        unsigned long long total = 0;
        while (n) {
            string l;
            getline(cin, l);
            if (l == ".") {
                --n;
                cout << total << endl;
                total = 0;
            } else {
                stringstream ss(l);
                string s;
                while (ss >> s) {
                    if (w.count(s)) {
                        total += w[s];
                    }
                }
            }
        }
    }
    return 0;
}
