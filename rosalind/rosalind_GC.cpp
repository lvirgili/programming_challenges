#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

int main() {
     char ch;
     string name, greater_name;
     double max = 0;
     cin >> ch;
     while (cin >> name) {
          //cout << name << endl;
          map<char, int> nt;
          unsigned total = 0;
          nt['A'] = nt['C'] = nt['G'] = nt['T'] = 0;
          while (cin >> ch) {
               if (ch == '>') {break; }
               if (ch == '\n') continue;
               //cout << ch;
               ++nt[ch];
               ++total;
          }
          double prop = 100.0 * (nt['C'] + nt['G']) / total;
          //cout << prop << endl;
          if (prop > max) {
               greater_name = name;
               max = prop;
          }

     }
     cout << setprecision(6) << greater_name << endl << max << '%' << endl;
     return 0;
}
