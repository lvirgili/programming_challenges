#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int t; cin >> t;
    int i = 5;
    int total = 0;
    while (i--) {
        int x; cin >> x;
        if (x == t) ++total;
    }
    cout << total << endl;
    return 0;
}
