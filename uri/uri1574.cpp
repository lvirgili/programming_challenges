#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int p = 0;
        string ins[n + 1];
        cin.ignore(256, '\n');
        for (int i = 1; i <= n; ++i) {
            getline(cin, ins[i]);
            int k = i;
            while (ins[k] != "LEFT" && ins[k] != "RIGHT") {
                istringstream ss(ins[k]);
                ss.ignore(256, ' ');
                ss.ignore(256, ' ');
                ss >> k;
            }
            if (ins[k] == "LEFT") --p;
            else if (ins[k] == "RIGHT") ++p;
        }
        cout << p << endl;
    }
    return 0;
}
