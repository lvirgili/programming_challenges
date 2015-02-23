#include <iostream>
using namespace std;

int main() {
    int m;
    int c = 1;
    while (cin >> m, m) {
        m--;
        int x;
        cin >> x;
        int total = x;
        while (m--) {
            char c;
            cin >> c >> x;
            if (c == '+') total += x;
            else total -= x;
        }
        cout << "Teste " << c++ << endl << total << endl << endl;;
    }
    return 0;
}
