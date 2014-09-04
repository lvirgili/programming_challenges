#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main() {
    int M, N;
    cin >> N >> M;
    map<unsigned long, int> casas;
    for (int i = 0; i < N; ++i) {
        unsigned long x; cin >> x;
        casas[x] = i;
    }
    unsigned long pos = 0;
    unsigned long dist = 0;
    for (int i = 0; i < M; ++i) {
        unsigned long x; cin >> x;
        dist += fabs(casas[pos] - casas[x]);
        pos = x;
    }
    cout << dist << endl;
    return 0;
}
