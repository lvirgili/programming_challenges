#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long nat;

int main() {
    nat last = 0;
    bool broke = false;
    nat x;
    while (cin >> x) {
        if (!broke) {
            if (x > last) {
                last = x;
            } else {
                broke = true;
            }
        }
    }
    cout << last + 1 << endl;
    return 0;
}