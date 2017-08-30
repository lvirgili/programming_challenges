#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int p, n; cin >> p >> n;
  bool ok = true;
  int v[n];
  for (int i = 0; i < n; ++i) cin >> v[i];

  for (int i = 1; i < n; ++i) {
      if (abs(v[i] - v[i-1]) > p) {
          cout << "GAME OVER\n";
          return 0;
      }
  }
  cout << "YOU WIN\n";
  return 0;
}
