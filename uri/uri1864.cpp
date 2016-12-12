#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n; cin >> n;

    for (int i = 1; i <= n; ++i) {
        cout << s[i - 1];
    }
    cout << endl;
    return 0;
}

