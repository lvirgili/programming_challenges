#include <iostream>
#include <map>
#include <cctype>
using namespace std;

int main() {
     map<char, int> n;
     n['A'] = n['T'] = n['G'] = n['C'] = 0;
     char ch;
     while (cin >> ch) {
          if (isalpha(ch) == false) {
               break;
          }
          ++n[ch];
     }
     cout << n['A'] << ' ' << n['C'] << ' ' << n['G'] << ' ' << n['T'] << endl;
     return 0;
}
