#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N;
    while (cin >> N, N != 0) {
        char in[N];
        for (int n = N-1; n >= 0; --n) {
            cin >> in[n];
        }
        char out[N];
        for (int n = 0; n < N; ++n) {
            cin >> out[n];
        }
        int top_in = N-1;
        stack<char> station;
        bool imp = false;
        for (int i = 0; i < N; ++i) {
            char outc = out[i];
            while (station.empty() || station.top() != outc) {
                if (top_in == -1) {
                    cout << " Impossible";
                    imp = true;
                    break;
                } else {
                    cout << "I";
                    station.push( in[top_in--] );
                }
            }
            if (imp) {
                break;
            }
            cout << "R";
            station.pop();
        }
        cout << endl;
    }
    return 0;
}
