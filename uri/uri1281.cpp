#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<string, double> p;
        string s;
        double val;
        for (int i = 0; i < n; ++i) {
            cin >> s >> val;
            p[s] = val;
        }
        int m;
        cin >> m;
        double total = 0;
        for (int i = 0; i < m; ++i) {
            int quant;
            cin >> s >> quant;
            total += p[s] * quant;
        }
        printf("R$ %.2lf\n", total);
    }
    return 0;
}
