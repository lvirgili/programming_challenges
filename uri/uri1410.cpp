#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, d;
    while (cin >> a >> d, a) {
        int adist[a], ddist[d];
        for (int i = 0; i < a; ++i) {
            cin >> adist[i];
        }
        for (int i = 0; i < d; ++i) {
            cin >> ddist[i];
        }
        sort(adist, adist + a);
        sort(ddist, ddist + d);
        if (adist[0] >= ddist[1] || (adist[0] == ddist[0] && ddist[0] == ddist[1])) {
            cout << "N\n";
        } else {
            cout << "Y\n";
        }
    }
    return 0;
}
