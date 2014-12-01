#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        scanf("%d x %d", &a1, &b1);
        scanf("%d x %d", &a2, &b2);
        int p1 = 0, p2 = 0;
        if (a1 > b1) p1 += 3;
        else if (a1 < b1) p2 += 3;
        else {++p1; ++p2;}
        if (a2 > b2) p2 += 3;
        else if (a2 < b2) p1 += 3;
        else {++p1; ++p2;}
        if (p1 > p2) {
            cout << "Time 1\n";
        } else if (p1 < p2) {
            cout << "Time 2\n";
        } else {
            if (b1 > b2) {
                cout << "Time 2\n";
            } else if (b1 < b2) {
                cout << "Time 1\n";
            } else {
                cout << "Penaltis\n";
            }
        }
    }
    return 0;
}
