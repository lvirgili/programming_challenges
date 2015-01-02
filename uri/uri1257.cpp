#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int l;
        cin >> l;
        auto hash = 0ull;
        for (int j = 0; j < l; ++j) {
            string s;
            cin >> s;
            for (auto i = 0u; i < s.size(); ++i) {
                hash += i + (s[i] - 'A') + j;
            }
        }
        cout << hash << endl;
    }
    return 0;
}
