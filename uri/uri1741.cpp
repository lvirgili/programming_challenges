#include <iostream>
#include <string>
#include <cctype>
#include <stack>
#include <cmath>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        if (s.size() % 2 != 1) {
            cout << "Invalid expression.\n";
            continue;
        }
        stack<long> p;
        long long i = (long long)s.size() - 1;
        bool invalid = false, zero = false;
        while (i >= 0) {
            if (isdigit(s[i])) {
                p.push(s[i] - '0');
            } else {
                if (p.size() < 2) {
                    invalid = true;
                    break;
                } else {
                    long a = p.top();
                    p.pop();
                    long b = p.top();
                    p.pop();
                    if (s[i] == '+') {
                        p.push(a + b);
                    } else if (s[i] == '-') {
                        p.push(b - a);
                    } else if (s[i] == '*') {
                        p.push(a * b);
                    } else {
                        if (a == 0) {
                            zero = true;
                            p.push(1);
                        } else {
                            p.push(b / a);
                        }
                    }
                }
            }
            i -= 2;
        }
        if (p.size() != 1) invalid = true;
        if (!invalid && !zero) {
            cout << "The answer is " << p.top() << ".\n";
        } else if (!invalid && zero) {
            cout << "Division by zero.\n";
        } else {
            cout << "Invalid expression.\n";
        }
    }
    return 0;
}
