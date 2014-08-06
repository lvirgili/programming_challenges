#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s, t;
    cin >> n;
    cin >> s >> t;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == t[i])
            ++total;
    }
    cout << total << endl;
    return 0;
}
