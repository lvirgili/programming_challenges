#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        cin.ignore(256, '\n');
        int subs[26][2];
        memset(subs, -1, sizeof subs);
        char p;
        int t;
        string st;
        for (int i = 0; i < n; ++i) {
            string s;
            getline(cin, s);
            stringstream ss(s);
            ss >> p >> t >> st;
            if (st == "correct") {
                subs[p-'A'][0] = t;
            } else {
                ++subs[p-'A'][1];
            }
        }
        int solv = 0;
        long points = 0;
        for (int i = 0; i < 26; ++i) {
            if (subs[i][0] != -1) {
                ++solv;
                points += subs[i][0] + 20 * (subs[i][1] + 1);
            }
        }
        cout << solv << ' ' << points << endl;
    }
    return 0;
}
