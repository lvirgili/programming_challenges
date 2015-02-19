#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int t = 1;
    while (cin >> n, n) {
        cin.ignore(256, '\n');
        string na, nb;
        cin >> na >> nb;
        cout << "Teste " << t++ << endl;
        while (n--) {
            int x, y;
            cin >> x >> y;
            int s = x + y;
            if (s % 2 == 0) cout << na << endl;
            else cout << nb << endl;
        }
        cout << endl;
    }
}
