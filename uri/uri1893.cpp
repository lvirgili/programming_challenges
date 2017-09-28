#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (b <= 2) cout << "nova\n";
  else if (b >= 97) cout << "cheia\n";
  else if (a < b) cout << "crescente\n";
  else cout << "minguante\n";
  return 0;
}