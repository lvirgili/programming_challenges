#include <iostream>
using namespace std;

int main() {
  int x; cin >> x;
  if (x >= 86) {
    cout << "A\n";
  } else if (x >= 61) {
    cout << "B\n";
  } else if (x >= 36) {
    cout << "C\n";
  } else if (x >= 1) {
    cout << "D\n";
  } else {
    cout << "E\n";
  }
  return 0;
}