#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while (cin >> s, s != "0") {
        unsigned num = 0;
        unsigned long pow = 2;
        for (long long i = (long long)s.size()-1; i >= 0; --i) {
            num += (s[i] - '0') * (pow - 1);
            pow *= 2;
        }
        cout << num << endl;
    }
    return 0;
}
