#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore(256, '\n');
    while (n--) {
        string s;
        getline(cin, s);
        for (long i = (long)s.size() / 2 - 1; i >= 0; --i)
            cout << s[i];
        for (unsigned i = s.size() - 1; i >= s.size() / 2; --i)
            cout << s[i];
        cout << endl;
    }
    return 0;
}
