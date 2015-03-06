#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int t;
    cin >> t;
    double g[6];
    while (t--) {
        int p, n;
        cin >> p >> n;
        for (int i = 0; i < n; ++i) {
            double total = 0;
            for (int j = 0; j < p; ++j) {
                cin >> g[j];
                total += g[j];
            }
            double avg = total / p;
            if (avg < 4) printf("%.2lf\n", avg);
            else if (avg >= 7) {
                double m = avg;
                for (int j = 0; j < p; ++j) {
                    if (g[j] > m) m = g[j];
                }
                printf("%.2lf\n", m);
            } else {
                double m = avg;
                for (int j = 0; j < p; ++j) {
                    if ((g[j] >= 4 && g[j] < 7) && g[j] > avg) m = g[j];
                }
                printf("%.2lf\n", m);
            }
        }
    }
    return 0;
}
