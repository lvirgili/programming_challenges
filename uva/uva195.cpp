#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

struct comp {
    bool operator() (char a, char b) {
        char la = tolower(a), lb = tolower(b);
        if (la != lb) {
            return la < lb;
        }
        return a < b;
    }
} comp_chars;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        string last = "";
        sort(s.begin(), s.end(), comp_chars);
        do {
            if (last != s) {
                cout << s << endl;
            }
            last = s;
        } while (next_permutation(s.begin(), s.end(), comp_chars));
    }
    return 0;
}
