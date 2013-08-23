#include <iostream>
using namespace std;

int main() {
     int T; cin >> T;
     for (int i = 0; i < T; ++i) {
          cout << "Case " << i + 1 << ": ";
          int a, b, c; cin >> a >> b >> c;
          if (a < b) {
               if (c < a) {
                    cout << a << endl;
               } else if (b < c) {
                    cout << b << endl;
               } else {
                    cout << c << endl;
               }
          } else {
               if (a < c) {
                    cout << a << endl;
               } else if (c < b) {
                    cout << b << endl;
               } else {
                    cout << c << endl;
               }
          }
     }
     return 0;
}
