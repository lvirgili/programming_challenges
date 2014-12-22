#include <iostream>
using namespace std;

long maximumXOR(long l, long r) {
    long q = l ^ r, a = 1;
    while(q){
        q /= 2;
        a <<= 1;
    }
    return --a;
}

int main() {
    long l, r;
    cin >> l >> r;
    cout << maximumXOR(l, r) << endl;
    return 0;
}
