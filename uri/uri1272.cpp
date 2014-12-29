#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(256, '\n');
    while (n--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string p;
        while (ss >> p)
            cout << p[0];
        cout << endl;
    }
    return 0;
}
