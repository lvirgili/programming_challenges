#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    bool l = false;
    while (cin >> n, n) {
        cin.ignore(256, '\n');
        string lines[n];
        string line;
        unsigned m = 0;
        for (int i = 0; i < n; ++i) {
            getline(cin, line);
            stringstream ss(line);
            string crap;
            bool space = false;
            while (ss >> crap) {
                if (space) lines[i] += " ";
                space = true;
                lines[i] += crap;
            }
            if (lines[i].size() > m) m = lines[i].size();
        }
        if (l) cout << endl;
        l = true;
        for (int i = 0; i < n; ++i) printf("%*s\n", m, lines[i].c_str());
    }
    return 0;
}
