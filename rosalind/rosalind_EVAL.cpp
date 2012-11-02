#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
using namespace std;

double prob(double p) {
     return 2 * (p / 2) * (p / 2) + 2 * ((1 - p) / 2) * ((1 - p) / 2);
}

int main() {
     int m, n;
     cin >> m >> n;
     double gc_content;
     while (cin >> gc_content) {
          double prob_repeat = prob(gc_content);
          printf("%.3lf ", pow(prob_repeat, m) * (n - m + 1));
     }
     cout << endl;
     return 0;
}
