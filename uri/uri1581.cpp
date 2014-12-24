#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int k;
        cin >> k;
        set<string> ss;
        while (k--) {
            string s;
            cin >> s;
            ss.insert(s);
        }
        if (ss.size() > 1) cout << "ingles\n";
        else cout << *ss.begin() << endl;
    }
    return 0;
}
