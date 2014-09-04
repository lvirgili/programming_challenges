#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int N; cin >> N;
    int v[101];
    memset(v, 0, sizeof(v));
    int max = 0;
    int nota = 0;
    for (int i = 0; i < N; ++i) {
        int x; cin >> x;
        ++v[x];
        if (v[x] == max) {
            if (x > nota)
                nota = x;
        }
        if (v[x] > max) {
            max = v[x];
            nota = x;
        }
    }
    cout << nota << endl;
    return 0;
}
