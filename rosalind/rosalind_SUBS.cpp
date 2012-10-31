#include <iostream>
#include <string>
using namespace std;

int main() {
     string s, t;
     cin >> s >> t;
     size_t found = s.find(t);
     while (found != string::npos) {
          cout << found + 1 << ' ';
          found = s.find(t, found + 1);
     }
     cout << endl;
     return 0;
}
