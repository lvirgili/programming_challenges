#include <bits/stdc++.h>
using namespace std;

int main() {
    long x;
    map <long, int> times;
    for (int i = 0; pow(2, i) <= 1000000; ++i) {
        times.insert(make_pair(pow(2, i), i));
    }
    while (cin >> x) {
        cout << times[x] << endl;
    }
    return 0;
}