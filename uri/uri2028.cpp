#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int n, caso = 1;
    while (cin >> n) {
        if (n == 0) {
            printf("Caso %d: 1 numero\n0\n\n", caso);
            ++caso;
            continue;
        }
        vector<int> s;
        s.push_back(0);
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                s.push_back(i);
            }
        }
        printf("Caso %d: %d numeros\n", caso, s.size());
        for (unsigned i = 0; i < s.size() - 1; ++i) {
            cout << s[i] << ' ';
        }
        cout << s[s.size() - 1] <<  endl << endl;
        ++caso;
    }
    return 0;
}
