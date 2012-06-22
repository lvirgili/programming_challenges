//5.91 out of a maximum of 6s. XD
#include <iostream>
#include <vector>
using namespace std;

const unsigned long L = 1000000000;
vector<bool> pr(31622, true);

void sieve() {
     pr[0] = pr[1] = false;
     for (unsigned long i = 2; i*i <= L; ++i) {
          if (pr[i] == true) {
               unsigned long j = i + i;
               while (j*j <= L) {
                    pr[j] = false;
                    j += i;
               }
          }
     }
}

int main() {
     sieve();
     unsigned t; cin >> t;
     for (unsigned i = 0; i < t; ++i) {
          unsigned long m, n;
          cin >> m >> n;
          if (m <= 2) {
               cout << 2 << endl;
               m = 3;
          }
          if (m % 2 == 0) ++m;
          for (unsigned p = m; p <= n; p += 2) {
               if (p < 31622) {
                    if (pr[p] == true) {
                         cout << p << endl;
                    }
                    continue;
               }
               if (p % 2 == 0 || (p % 6 != 1 && p % 6 != 5)) {
                    continue;
               }
               bool flag = true;
               for (unsigned k = 3; k*k <= p && k < 31622; k+=2) {
                    if (pr[k] == false) continue;
                    if (p % k == 0) {
                         flag = false;
                         break;
                    }
               }
               if (flag == true) {
                    cout << p << endl;
               }
          }
          cout << endl;
     }
     return 0;
}
