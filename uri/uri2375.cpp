#include <iostream>
using namespace std;

int main() {
  int d; cin >> d;
  int a, l, p;
  cin >> a >> l >> p;
  if (a >= d && l >= d & p >= d) {
    cout << "S\n";
  } else {
    cout << "N\n";
  }
  return 0;
}