#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    int T; cin >> T;
    for (int t = 0; t < T; ++t) {
        string a, b;
        cin >> a >> b;
        int count_a[26], count_b[26];
        for (int i = 0; i < 26; ++i) {
            count_a[i] = count_b[i] = 0;
        }
        for (unsigned i = 0; i < a.size(); ++i) {
            ++count_a[static_cast<int>(a[i] - 'a')];
        }
        for (unsigned i = 0; i < b.size(); ++i) {
            ++count_b[static_cast<int>(b[i] - 'a')];
        }
        long sum = 0;
        for (int i = 0; i < 26; ++i) {
            sum += count_a[i] + count_b[i] - 2 * min(count_a[i], count_b[i]);
        }
        cout << sum << endl;
    }
    return 0;
}
