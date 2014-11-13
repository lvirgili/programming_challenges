#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string s;
   while (getline(cin, s)) {
      bool upper = true;
      for (unsigned i = 0; i < s.size(); ++i) {
         if (s[i] == ' ') cout << ' ';
         else if (upper) {
            cout << (char)toupper(s[i]);
            upper = false;
         } else {
            cout << (char)tolower(s[i]);
            upper = true;
         }
      }
      cout << endl;
   }
   return 0;
}
