#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int N; cin >> N;
    int v[N + 2];
    memset(v, 0, sizeof(v));
    for (int i = 1; i <= N; ++i) {
        int x; cin >> x;
        if (x) {
            ++v[i - 1];
            ++v[i];
            ++v[i + 1];
        }
    }
    for (int i = 1; i <= N; ++i) {
        cout << v[i] << endl;
    }
    return 0;
}
