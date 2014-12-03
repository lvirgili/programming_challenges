#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        string p;
        int h[t + 1];
        for (int i = 0; i < t; ++i) cin >> h[i];
        cin.ignore(256, '\n');
        cin >> p;
        int hits = 0;
        for (int i = 0; i < t; ++i) {
            if (h[i] <= 2 && p[i] == 'S') ++hits;
            else if (h[i] > 2 && p[i] == 'J') ++hits;
        }
        cout << hits << endl;
    }
}
