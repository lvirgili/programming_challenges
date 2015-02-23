#include <iostream>
using namespace std;

int main() {
    int x1, x2, y1, y2;
    int c = 1;
    while(cin >> x1 >> y1 >> x2 >> y2, x1 || x2 || y1 || y2) {
        int n;
        cin >> n;
        int t = 0;
        while (n--) {
            int x, y;
            cin >> x >> y;
            if (x1 <= x && x <= x2 && y2 <= y && y <= y1) ++t;
        }
        cout << "Teste " << c++ << endl << t << endl << endl;
    }
    return 0;
}
