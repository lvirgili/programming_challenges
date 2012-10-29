#include <iostream>
#include <string>
using namespace std;

int main() {
     string s, t;
     cin >> s >> t;
     unsigned hdist = 0;
     for (unsigned i = 0; i < s.size(); ++i) {
          if (s[i] != t[i]) {
               ++hdist;
          }
     }
     cout << hdist << endl;
     return 0;
}
