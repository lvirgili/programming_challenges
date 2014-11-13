#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore(1024, '\n');
    while (n--) {
        string s;
        getline(cin, s);
        for (auto &c : s)
            if (isalpha(c)) c += 3;
        reverse(s.begin(), s.end());
        for (unsigned i = s.size() / 2; i < s.size(); ++i)
            s[i] -= 1;
        cout << s << endl;
    }
    return 0;
}
