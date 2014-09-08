#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int N, M;
    vector<int> fila;
    set<int> des;
    cin >> N;
    for (int n = 0; n < N; ++n) {
        int x; cin >> x;
        fila.push_back(x);
    }
    cin >> M;
    for (int m = 0; m < M; ++m) {
        int x; cin>> x;
        des.insert(x);
    }

    for (unsigned i = 0; i < fila.size(); ++i) {
        if (des.count(fila[i]) == 0) {
            cout << fila[i] << ' ';
        }
    }
    cout << endl;

    return 0;
}
