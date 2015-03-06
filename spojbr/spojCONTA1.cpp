#include <iostream>
using namespace std;

int main() {
    int l;
    cin >> l;
    long total = 7;
    if (l > 10) {
       if (l > 30) total += 20;
       else {
            total += l - 10;
       }
    }
    if (l > 30) {
       if (l > 100) total += 70 * 2;
       else {
           total += (l - 30) * 2;
       }
    }
    if (l > 100) total += (l - 100) * 5;
    cout << total << endl;
    cin >>l;
    return 0;
}
