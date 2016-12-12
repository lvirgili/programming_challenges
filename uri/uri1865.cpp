#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        string name; cin >> name;
        if (name == "Thor") cout << "Y\n";
        else cout << "N\n";
        int c; cin >> c;
    }
    return 0;
}
