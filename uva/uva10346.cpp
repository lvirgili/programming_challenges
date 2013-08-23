#include <iostream>
using namespace std;

int main() {
     int n, k;
     while (cin >> n >> k) {
          int cigs = n, butts = n;
          while (butts >= k) {
               cigs += butts / k;
               butts = (butts / k) + (butts % k);
          }
          cout << cigs << endl;
     }
     return 0;
}
