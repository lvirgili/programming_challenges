#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long nat;

int main() {
    int n; cin >> n;
    while (n--) {
        cin.ignore(256, '\n');
        string name; cin >> name;
        double dif; cin >> dif;
        double grades[7];
        for (int i = 0; i < 7; ++i) {
            cin >> grades[i];
        }
        sort(grades, grades + 7);
        double total = accumulate(grades + 1, grades + 6, 0.0);
        cout << name;
        printf(" %.2lf\n", total * dif);
    }
    return 0;
}
