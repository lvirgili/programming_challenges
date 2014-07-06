#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n; cin >> n;
    for (int t = 0; t < n; ++t) {
        string s; cin >> s;
        stack<char> p;
        for (unsigned i = 0; i < s.size(); ++i) {
            char c = s[i];
            if (isalnum(c)) {
                cout << c;
            } else if (c == '(') {
                p.push(c);
            } else if (c == ')') {
                while (p.top() != '(') {
                    cout << p.top();
                    p.pop();
                }
                p.pop();
            } else if (p.empty() || p.top() == '(') {
                p.push(c);
            } else if (c == '+' || c == '-') {
                if (p.top() == '+' || p.top() == '-') {
                    cout << p.top();
                    p.pop();
                    p.push(c);
                } else {
                    while (p.size() > 0 && (p.top() == '*' || p.top() == '/' || p.top() == '^')) {
                        cout << p.top();
                        p.pop();
                    }
                    if (p.size() && p.top() != '(') {
                        cout << p.top();
                        p.pop();
                    }
                    p.push(c);
                }
            } else if (c == '^') {
                p.push(c);
            } else {
                if (p.top() == '+' || p.top() == '-') {
                    p.push(c);
                } else if(p.top() == '*' || p.top() == '/') {
                    cout << p.top();
                    p.pop();
                    p.push(c);
                } else {
                    while (p.size() > 0 && p.top() == '^') {
                        cout << p.top();
                        p.pop();
                    }
                    if (p.size() > 0 && (p.top() == '+' || p.top() == '-')) {
                        p.push(c);
                    } else if(p.size() > 0 && (p.top() == '*' || p.top() == '/')) {
                        cout << p.top();
                        p.pop();
                        p.push(c);
                    } else if (p.size() > 0 && p.top() == '(') {
                        p.push(c);
                    }
                }
            }
        }
        while (!p.empty()) {
            cout << p.top();
            p.pop();
        }
        cout << endl;
    }
    return 0;
}
