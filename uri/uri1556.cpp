#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        vector<string> ws;
        set<string> wsu;
        for (auto &c : s) {
            unsigned t = ws.size();
            for (unsigned i = 0; i < t; ++i) {
                string n = ws[i] + c;
                ws.push_back(n);
                wsu.insert(n);
            }
            string a(1, c);
            ws.push_back(a);
            wsu.insert(a);
        }
        for (auto &w : wsu) cout << w << endl;
        cout << endl;
    }
    return 0;
}
