#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m, n) {
        cin.ignore(256, '\n');
        string s[n];
        for (int i = 0; i < n; ++i) cin >> s[i];
        int a, b;
        cin >> a >> b;
        int lratio = a / n;
        int cratio = b / m;
        string ns[a];

        for (int i = 0; i < n; ++i) {
            for (unsigned j = 0; j < s[i].size(); ++j) {
                for (int k = 0; k < cratio; ++k)
                    ns[i].push_back(s[i][j]);
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < lratio; ++j)
                cout << ns[i] << endl;
        }
        cout << endl;
    }
    return 0;
}
