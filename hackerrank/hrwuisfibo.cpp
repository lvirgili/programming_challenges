#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long double n;
        cin >> n;
        long double nsq = 5 * n * n;
        long double nsqp = sqrt(nsq + 4);
        long double nsqm = sqrt(nsq - 4);
        if (nsqp == floor(nsqp) || nsqm == floor(nsqm)) {
            cout << "IsFibo\n";
        } else {
            cout << "IsNotFibo\n";
        }
    }
    return 0;
}
