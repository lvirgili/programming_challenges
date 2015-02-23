#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int t = 1;
    while (cin >> n, n) {
        cout << "Teste " << t++ << endl;
        cout << (long long)(pow(2, n) - 1) << endl << endl;
    }
    return 0;
}
