#include <iostream>
using namespace std;

int main() {
  int x;
  int maior = 0;
  while (true) {
    cin >> x;
    if (x == 0) {
      break;
    }
    if (x > maior) maior = x;
  }
  cout << maior << endl;
  return 0;
}