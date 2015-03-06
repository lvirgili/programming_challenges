#include <iostream>
using namespace std;

int main() {
    int n;
    int c = 1;
    while (cin >> n, n) {
          pair<int, int> aa[n];
          int m = 0;
          for (int i = 0; i < n; ++i) {
              cin >> aa[i].first >> aa[i].second;
              if (aa[i].second > m) m = aa[i].second;
          }
          cout << "Turma " << c++ << endl;
          for (int i = 0; i < n; ++i) {
              if (aa[i].second == m) cout << aa[i].first << ' ';
          }
          cout << endl << endl;
    }
    return 0;
}
