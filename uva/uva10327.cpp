#include <iostream>
#include <utility>
using namespace std;

int main() {
    int N;
    long long V[1024];
    while (cin >> N) {
        for (int i = 0; i < N; ++i) {
            cin >> V[i];
        }
        long cont = 0;
        int t = 0;
        while (t < N) {
            for (int i = N - 1; i > t; --i) {
                if (V[i] < V[i-1]) {
                    ++cont;
                    swap(V[i], V[i-1]);
                }
            }
            ++t;
        }
        cout << "Minimum exchange operations : " << cont << endl;
    }
    return 0;
}
