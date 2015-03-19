#include <iostream>
#include <bitset>
using namespace std;

typedef unsigned long long ll;

ll gcd(ll a, ll b) {
    while (b) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(256, '\n');
    int c = 1;
    while (n--) {
        string a, b;
        getline(cin, a);
        getline(cin, b);
        bitset<32> aa(a), bb(b);
        cout << "Pair #" << c++ << ": ";
        if (gcd(aa.to_ullong(), bb.to_ullong()) != 1) {
            cout << "All you need is love!\n";
        } else {
            cout << "Love is not all you need!\n";
        }
    }
    return 0;
}
