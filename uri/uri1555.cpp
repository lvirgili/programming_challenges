#include <iostream>
using namespace std;

#define sq(x) (x)*(x)
#define cb(x) (sq(x))*(x)

long rafael(int x, int y) {
    return sq(3*x) + sq(y);
}

long beto(int x, int y) {
    return 2*sq(x) + sq(5*y);
}

long carlos(int x, int y) {
    return -100*x + cb(y);
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        long rr = rafael(x, y);
        long rb = beto(x, y);
        long rc = carlos(x, y);
        if (rr > rb && rr > rc) cout << "Rafael";
        else if (rb > rr && rb > rc) cout << "Beto";
        else if (rc > rr && rc > rb) cout << "Carlos";
        cout << " ganhou\n";
    }
    return 0;
}
