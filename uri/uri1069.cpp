#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    for (int c = 0; c < n; ++c) {
        string s; cin >> s;
        stack<char> p;
        int cont = 0;
        for (unsigned i = 0; i < s.size(); ++i) {
            if (s[i] == '<') {
                p.push('<');
            } else if (s[i] == '>') {
                if (!p.empty()) {
                    if (p.top() == '<') {
                        p.pop();
                        ++cont;
                    } else {
                        p.push('>');
                    }
                } else {
                    p.push('>');
                }
            }
        }
        cout << cont << endl;
    }
    return 0;
}
