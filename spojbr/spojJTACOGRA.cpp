#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long total = 0;
    while (n--) {
        int t, v;
        cin >> t >> v;
        total += t * v;
    }
    cout << total << endl;
    return 0;
}
