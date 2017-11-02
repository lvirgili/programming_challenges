#include <bits/stdc++.h>
using namespace std;

int main() {
    string m[10];
    m[0] = "GQaku";
    m[1] = "ISblv";
    m[2] = "EOYcmw";
    m[3] = "FPZdnx";
    m[4] = "JTeoy";
    m[5] = "DNXfpz";
    m[6] = "AKUgq";
    m[7] = "CMWhr";
    m[8] = "BLVis";
    m[9] = "HRjt";
    int n;
    cin >> n;
    cin.ignore(256, '\n');
    while (n--) {
        string s;
        getline(cin, s);
        int count = 0;
        for (unsigned j = 0; j < s.size() && count < 12; ++j) {
            char c = s[j];
            for (int i = 0; i < 10; ++i) {
                if (m[i].find(c) != string::npos) {
                    cout << i;
                    ++count;
                }
            }
        }
        cout << endl;
    }
    return 0;
}