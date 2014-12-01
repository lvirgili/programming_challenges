#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a, b, c;
    while (getline(cin, a, '+')) {
        getline(cin, b, '=');
        getline(cin, c);
        if (a == "0" && b == "0" && c == "0") break;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        reverse(c.begin(), c.end());
        long na, nb, nc;
        na = stol(a);
        nb = stol(b);
        nc = stol(c);
        if (na + nb == nc) cout << "True\n";
        else cout << "False\n";
    }
    cout << "True\n";
    return 0;
}
