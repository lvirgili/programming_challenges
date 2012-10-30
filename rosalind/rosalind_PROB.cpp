#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     double p;
     while (cin >> p) {
          double prob = 2 * (p / 2) * (p / 2) + 2 * ((1 - p) / 2) * ((1 - p) / 2);
          cout << setprecision(3) << prob << ' ';
     }
     cout << endl;
     return 0;
}
