#include <iostream>
using namespace std;

int main() {
    int N, B, H, W;
    while (cin >> N >> B >> H >> W) {
        int p;
        bool possible = false;
        int min = 999999999;
        for (int h = 0; h < H; ++h) {
            cin >> p;
            for (int w = 0; w < W; ++w) {
                int a;
                cin >> a;
                if (a >= N && p * N <= B) {
                    possible = true;
                    if (min > p * N) {
                        min = p * N;
                    }
                }
            }
        }
        if (possible == true) {
            cout << min << endl;
        } else {
            cout << "stay home\n";
        }
    }
    return 0;
}
