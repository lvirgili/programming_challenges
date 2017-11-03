#include <iostream>
using namespace std;

int main() {
  int l, d, k, p;
  cin >> l >> d;
  cin >> k >> p;
  cout << l * k + (l / d) * p << endl;
  return 0;
}