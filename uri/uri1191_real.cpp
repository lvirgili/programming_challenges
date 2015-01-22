#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long f(const char x, const char s[], long n) {
    for (unsigned i = 0; i < n; ++i) {
        if (s[i] == x) return i;
    }
    return -1;
}

void print(const char pre[], const char in[], long n) {
    long root = f(pre[0], in, n);
    if (root != 0) print(pre+1, in, root);
    if (root != n-1) print(pre+root+1, in+root+1, n-root-1);
    cout << pre[0];
}

int main() {
    string pre, in;
    while (cin >> pre >> in) {
        print(pre.c_str(), in.c_str(), (long)pre.size());
        cout << endl;
    }
    return 0;
}
