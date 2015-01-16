#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(256, '\n');
    while (n--) {
        string s;
        getline(cin, s);
        vector<bool> v(26, false);
        int t = 0;
        for (auto i = 0u; i < s.size(); ++i) {
            if (isalpha(s[i])) {
                if (v[s[i] - 'a'] == false) {
                    v[s[i] - 'a'] = true;
                    ++t;
                }
            }
        }
        if (t == 26) cout << "frase completa\n";
        else if (t >= 13) cout << "frase quase completa\n";
        else cout << "frase mal elaborada\n";
    }
    return 0;
}
