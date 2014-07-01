#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int line[31];
    int col[31];
    int n; cin >> n;
    memset(line, 0, n * sizeof(int));
    memset(col, 0, n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int aux; cin >> aux;
            line[i] += aux;
            col[j] += aux;
        }
    }
    int winning = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (line[i] < col[j]) {
                ++winning;
            }
        }
    }
    cout << winning << endl;
    return 0;
}
