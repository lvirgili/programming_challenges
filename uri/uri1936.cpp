#include <bits/stdc++.h>
using namespace std;

vector<long> fats;

void populate() {
    fats.push_back(1);
    long i = 1;
    while (fats[fats.size() - 1] < 100500) {
        fats.push_back(fats[fats.size() - 1] * i);
        ++i;
    }
}

int main() {
    populate();
    long x; cin >> x;
    int total = 0;
    for (unsigned pos = fats.size() - 1; x > 0 && pos > 0; --pos) {
        int res = x / fats[pos];
        total += res;
        x %= fats[pos];
    }
    cout << total << endl;
    return 0;
}