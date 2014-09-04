#include <iostream>
using namespace std;

int main() {
    int v[5];
    for (int i = 0; i < 5; ++i)
        cin >> v[i];
    bool cres = true,
        dec = true;
    for (int i = 0; i < 4; ++i) {
        if (v[i] > v[i + 1])
            cres = false;
        if (v[i] < v[i + 1])
            dec = false;
    }
    if (cres)
        cout << "C\n";
    else if (dec)
        cout << "D\n";
    else
        cout << "N\n";
    return 0;
}
