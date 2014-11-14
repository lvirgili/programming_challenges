#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        string s, t;
        cin >> s >> t;
        if (s.size() < t.size()) {
            cout << "nao encaixa\n";
            continue;
        }
        bool fits = true;
        int j = 0;
        for (unsigned i = s.size() - t.size(); i < s.size(); ++i) {
            if (s[i] != t[j++]) {
                fits = false;
                break;
            }
        }
        if (fits) cout << "encaixa\n";
        else cout << "nao encaixa\n";
    }
    return 0;
}
