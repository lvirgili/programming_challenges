//Gotta hate these ones that cout does not work.

#include <cstdio>
#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int n = 0; n < N; ++n) {
        int K; cin >> K;
        map<char, int> c_vals;
        for (int k = 0; k < K; ++k) {
            char c; int val;
            cin >> c >> val;
            c_vals[c] = val;
        }
        int M; cin >> M;
        cin.ignore(256, '\n');
        long total = 0;
        for (int m = 0; m < M; ++m) {
            char line[10001]; fgets(line, 10001, stdin);
            for (unsigned i = 0; i < strlen(line); ++i) {
                char c = line[i];
                if (c_vals.count(c) == 1) {
                    total += c_vals[c];
                }
            }
        }
        printf("%.2f$\n", total / 100.00);
    }
    return 0;
}
