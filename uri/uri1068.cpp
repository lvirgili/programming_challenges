#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        stack<char> p;
        bool f = true;
        for (unsigned i = 0; i < s.size(); ++i) {
            char c = s[i];
            if (c != '(' && c != ')') {
                continue;
            } else {
                if (c == '(') {
                    p.push(c);
                } else {
                    if (p.empty() || p.top() != '(') {
                        f = false;
                        break;
                    } else {
                        p.pop();
                    }
                }
            }
        }
        if (f && p.empty()) {
            cout << "correct\n";
        } else {
            cout << "incorrect\n";
        }
    }
    return 0;
}
