#include <bits/stdc++.h>
using namespace std;

bool is_prime(unsigned long long x) {
  if (x < 2) return false;
  for (unsigned long long i = 2; i * i <= x; ++i) {
    if (x % i == 0) return false;
  }
  return true;
}

bool digits_prime(unsigned long long x) {
  while (x > 0) {
    if (!is_prime(x % 10)) return false;
    x /= 10;
  }
  return true;
}


int main() {
  unsigned long long x;
  while (cin >> x) {
    bool p = is_prime(x), digits = digits_prime(x);
    if (p && digits) {
      cout << "Super\n";
    } else if (p) {
      cout << "Primo\n";
    } else {
      cout << "Nada\n";
    }
  }
  return 0;
}