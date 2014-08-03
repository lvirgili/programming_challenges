#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        long freq[52];
        memset(freq, 0, sizeof(freq));
        long max = -1;
        for (unsigned i = 0; i < line.size(); ++i) {
            char c = line[i];
            if (!isalpha(c)) {
                continue;
            } else {
                if (islower(c)) {
                    ++freq[int(c - 'a' + 26)];
                    if (freq[int(c - 'a' + 26)] > max) {
                        max = freq[int(c - 'a' + 26)];
                    }
                } else {
                    ++freq[c - 'A'];
                    if (freq[c - 'A'] > max) {
                        max = freq[c - 'A'];
                    }
                }
            }
        }
        for (int i = 0; i < 52; ++i) {
            if (freq[i] == max) {
                if (i < 26) {
                    cout << (char)(i + 'A');
                } else {
                    cout << (char)(i + 'a' - 26);
                }
            }
        }
        cout << ' ' << max << endl;
    }
    return 0;
}
