#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    string d, c;
    while (getline(cin, d)) {
        getline(cin, c);
        if (c.size() == 1) {
            c += c[0];
            c[0] = '0';
        }
        stringstream ss;
        ss.imbue(locale("en_US.UTF8"));
        string m;
        m = d + c;
        ss << showbase << put_money(m);
        cout << ss.str() << endl;
    }
    return 0;
}
