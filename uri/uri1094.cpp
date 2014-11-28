#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0, c = 0, s = 0, r = 0;
    while (n--) {
        int q; char a;
        cin >> q >> a;
        total += q;
        if (a == 'C') c += q;
        if (a == 'R') r += q;
        if (a == 'S') s += q;
    }
    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    printf("Percentual de coelhos: %.2lf %%\n", 100.0 * c / total);
    printf("Percentual de ratos: %.2lf %%\n", 100.0 * r / total);
    printf("Percentual de sapos: %.2lf %%\n", 100.0 * s / total);
    return 0;
}
