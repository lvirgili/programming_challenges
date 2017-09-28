#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int total = 0;
  for (int i = 0; i < n; ++i) {
    int goals = 0;
    for (int j = 0; j < m; ++j) {
      int g; cin >> g;
      if (g) ++goals;
    }
    if (goals == m) ++total;
  }
  cout << total << endl;
  return 0;
}