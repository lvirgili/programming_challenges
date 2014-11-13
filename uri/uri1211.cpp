#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
   long x;
   while (cin >> x) {
      vector<string> v;
      string base;
      while (x--) {
         cin >> base;
         v.push_back(base);
      }
      sort(v.begin(), v.end());
      unsigned long long total = 0;
      base = v[0];
      for (unsigned i = 1; i < v.size(); ++i) {
         string comp; comp = v[i];
         for (unsigned i = 0; i < comp.size(); ++i) {
            if (comp[i] == base[i]) ++total;
            else break;
         }
         base = comp;
      }
      cout << total << endl;
   }
   system("pause");
   return 0;
}
