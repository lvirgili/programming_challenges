#include <iostream>
#include <map>
using namespace std;

int main() {
    map<long long, int> c;
    long long N; cin >> N;
    for (long long n = 0; n < N; ++n) {
        long long x; cin >> x;
        if (c.find(x) != c.end()) {
            ++c[x];
        } else {
            c[x] = 1;
        }
    }
    for (map<long long, int>::iterator it = c.begin(); it != c.end(); ++it) {
        cout << it->first << " aparece " << it->second << " vez(es)\n";
    }
    return 0;
}
