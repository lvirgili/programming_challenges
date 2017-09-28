#include <bits/stdc++.h>
using namespace std;

int main() {
    int j, r;
    cin >> j >> r;
    int points[j * r];
    memset(points, 0, sizeof points);
    int player = 0;
    for (int i = 0; i < j * r; ++i) {
        int p; cin >> p;
        points[player] += p;
        player = (player + 1) % j;
    }
    int max = points[0];
    player = 0;
    for (int i = 1; i < j * r; ++i) {
        if (points[i] >= max) {
            max = points[i];
            player = i;
        }
    }
    cout << player + 1 << endl;
    return 0;
}