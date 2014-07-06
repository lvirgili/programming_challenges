#include <iostream>
#include <string>
#include <stack>
#include <cstdio>
#include <cctype>
using namespace std;

int main() {
    int N; cin >> N;
    int ch;
    string s;
    ch = getchar();
    ch = getchar();
    int cont = 0;
    while (ch = getchar(), (cont != N && ch != EOF)) {
        if ((char)ch == '\n') {
            s.push_back(' ');
            ++cont;
        } else {
            s.push_back(ch);
            ch = getchar();
        }

    }
    stack<char> p;
    for (unsigned i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (c == ' ') {
            while (!p.empty()) {
                cout << p.top();
                p.pop();
            }
            cout << endl << endl;
            continue;
        }
        if (isdigit(c)) {
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
                while (p.size() > 0 && (p.top() == '*' || p.top() == '/')) {
                    cout << p.top();
                    p.pop();
                }
                if (p.size() && p.top() != '(') {
                    cout << p.top();
                    p.pop();
                }
                p.push(c);
            }
        } else {
            if (p.top() == '+' || p.top() == '-') {
                p.push(c);
            } else if(p.top() == '*' || p.top() == '/') {
                cout << p.top();
                p.pop();
                p.push(c);
            }
        }
    }
    while (!p.empty()) {
        cout << p.top();
        p.pop();
    }
    cout << endl;
    return 0;
}
