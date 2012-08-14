#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    while (cin >> s, s != "#") {
        bool flag = next_permutation(s.begin(), s.end());
        if (flag == true) {
            cout << s << endl;
        } else {
            cout << "No Successor\n";
        }
    }
    return 0;
}
