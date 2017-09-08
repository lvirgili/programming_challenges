#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore(256, '\n');
    string s;
    while (m--) {
        cin >> s;
        if (s == "fechou") {
            ++n;
        } else {
            --n;
        }
    }
    cout << n << endl;
    return 0;
}
