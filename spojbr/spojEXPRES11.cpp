#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(256, '\n');
    while (t--) {
        string s;
        stack<char> p;
        cin >> s;
        bool ok = true;
        for (auto c : s) {
            if (c == '(' || c == '[' || c == '{') {
                p.push(c);
            }
            else if (p.empty()) {
                ok = false;
                break;
            } else {
                char t = p.top();
                p.pop();
                if (c == ')') {
                    if (t != '(') {
                        ok = false;
                        break;
                    }
                }
                if (c == ']') {
                    if (t != '[') {
                        ok = false;
                        break;
                    }
                }
                if (c == '}') {
                    if (t != '{') {
                        ok = false;
                        break;
                    }
                }
            }
        }
        if (ok && p.size() == 0) cout << "S\n";
        else cout << "N\n";
    }
    return 0;
}
