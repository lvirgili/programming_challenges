#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    double best = -1;
    int m;
    while (n--) {
        int id;
        double grade;
        cin >> id >> grade;
        if (grade > best) {
            best = grade;
            m = id;
        }
    }
    if (best < 8.0) {
        cout << "Minimum note not reached\n";
    } else {
        cout << m << endl;
    }
    return 0;
}
