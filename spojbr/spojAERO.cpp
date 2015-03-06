#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a, v;
int c = 1;
    while (cin >> a >> v, a && v) {
          int aa[a+1];
          memset(aa, 0, sizeof aa);
          int m = 0;
          while (v--) {
                int x, y;
                cin >> x >> y;
                ++aa[x]; ++aa[y];
                if (aa[x] > m) m = aa[x];
                if (aa[y] > m) m = aa[y];
          }
          cout << "Teste " << c++ << endl;
          for (int i = 1; i <= a; ++i) {
              if (aa[i] == m) cout << i << ' ';
          }
          cout << endl << endl;
    }
    return 0;
}
