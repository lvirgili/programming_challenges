#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int comp(string &a, string &b) {
    unsigned i = 0;
    while (i < a.size() && tolower(a[i]) == tolower(b[i])) ++i;
    if (i == a.size()) return 0;
    else if (tolower(a[i]) < tolower(b[i])) return -1;
    else return 1;
}

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    cout << comp(a, b) << endl;
    return 0;
}
