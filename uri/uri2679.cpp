#include <iostream>

using namespace std;

int main() {
   unsigned long long x;
   cin >> x;
   if (x % 2 == 0) cout << x + 2 << endl;
   else cout << x + 1 << endl;

   return 0;
}