#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'P' || s[i] == 'C')
            total += 2;
        else if (s[i] == 'A')
            total += 1;
    }
    cout << total << endl;
    return 0;
}
