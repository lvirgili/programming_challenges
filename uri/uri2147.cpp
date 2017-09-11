#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore(256, '\n');
    while (t--) {
        string s;
        getline(cin, s);
        printf("%.2lf\n", s.size() * 0.01);
    }
    return 0;
}
