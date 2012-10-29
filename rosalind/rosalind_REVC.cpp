#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
     char ch; string s;
     while (cin >> ch) {
          if (ch == 'A') s.push_back('T');
          if (ch == 'T') s.push_back('A');
          if (ch == 'C') s.push_back('G');
          if (ch == 'G') s.push_back('C');
     }
     reverse(s.begin(), s.end());
     cout << s << endl;
     return 0;
}
