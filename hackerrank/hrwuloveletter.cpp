#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(256, '\n');
    while (t--) {
        string s;
        getline(cin, s);
        unsigned i = 0, j = s.size() - 1;
        long cont = 0;
        while (i < j) {
            if (s[i] != s[j]) {
                cont += abs(s[j] - s[i]);
            }
            ++i;
            --j;
        }
        cout << cont << endl;
    }
    return 0;
}
