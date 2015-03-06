#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int v[] = {a, b, c};
    int j = 0;
    while (j < 3) {
        int i = 2;
        while (i >= j) {
            if (v[i] < v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            --i;
        }
        ++j;
    }
    cout << v[1] << endl;
    return 0;
}
