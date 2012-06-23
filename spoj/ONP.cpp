//Simplified implementation of the Shunting-yard.

#include <iostream>
#include <queue>
#include <stack>
#include <cctype>
#include <string>
using namespace std;

int main() {
     int t; cin >> t;
     cin.ignore(400, '\n');
     for (int i = 0; i < t; ++i) {
          stack<char> s;
          queue<char> q;
          char token;
          string line;
          getline(cin, line);
          for (unsigned j = 0; j < line.size(); ++j) {
               token = line[j];
               if (token >= 'a' && token <= 'z') {
                    q.push(token);
               }
               if (token == '(') {
                    s.push(token);
               }
               if (token == ')') {
                    while (true) {
                         char c = s.top();
                         s.pop();
                         if (c == '(') break;
                         q.push(c);
                    }
               }
               if (token == '^') {
                    s.push(token);
               }
               if (token == '/') {
                    while (s.top() == '^' || s.top() == '/') {
                         q.push(s.top());
                         s.pop();
                    }
                    s.push(token);
               }
               if (token == '*') {
                    while (s.top() == '^' || s.top() == '/' ||
                           s.top() == '*') {
                         q.push(s.top());
                         s.pop();
                    }
                    s.push(token);
               }
               if (token == '-') {
                    while (s.top() == '^' || s.top() == '/' ||
                           s.top() == '*' || s.top() == '-') {
                         q.push(s.top());
                         s.pop();
                    }
                    s.push(token);
               }
               if (token == '+') {
                    s.push(token);
               }
          }
          while (s.size() > 0) {
               q.push(s.top());
               s.pop();
          }
          while (q.empty() == false) {
               cout << q.front();
               q.pop();
          }
          cout << endl;
     }
}
