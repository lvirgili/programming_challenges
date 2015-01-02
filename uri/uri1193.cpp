#include <iostream>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 1;
    while (n--) {
        string num, base;
        cin >> num >> base;
        stringstream ss(num);
        int x;
        cout << "Case " << dec << c++ << ":\n";
        if (base == "dec") {
            ss >> x;
            cout << hex << x << " hex" << endl;
            int tzeros = __builtin_clz(x);
            bitset<32> b(x);
            for (int i = 31 - tzeros; i >= 0; --i) cout << b[i];
            cout << " bin\n";
        } else if (base == "bin") {
            bitset<32> b(num);
            cout << (int)b.to_ulong() << " dec" << endl;
            cout << hex << (int)b.to_ulong() << " hex" << endl;
        } else {
            ss >> hex >> x;
            cout << dec << x << " dec" << endl;
            int tzeros = __builtin_clz(x);
            bitset<32> b(x);
            for (int i = 31 - tzeros; i >= 0; --i) cout << b[i];
            cout << " bin\n";
        }
        cout << endl;
    }
    return 0;
}
