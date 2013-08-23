#include <iostream>
using namespace std;

int main() {
     int K;
     while (cin >> K, K != 0) {
          int N, M; cin >> N >> M;
          for (int i = 0; i < K; ++i) {
               int x, y; cin >> x >> y;
               if (x == N || y == M) {
                    cout << "divisa\n";
               } else if (x < N && y < M) {
                    cout << "SO\n";
               } else if (x < N && y > M) {
                    cout << "NO\n";
               } else if (x > N && y < M) {
                    cout << "SE\n";
               } else {
                    cout << "NE\n";
               }
          }
     }
     return 0;
}
