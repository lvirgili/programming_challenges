#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int mdc(int a, int b) {
   if (a < 0) a = -a;
   if (b < 0) b = -b;
   int resto = a % b;
   while (resto != 0) {
      a = b;
      b = resto;
      resto = a % b;
   }
   return b;  
}

int main() {
   int n; cin >> n;
   string s; getline(cin, s);
   while (n--) {
      getline(cin, s);
      int a, b, c, d;
      stringstream ss;
      char op;
      ss << s;
      ss >> a;
      char lixo;
      ss >> lixo;
      ss >> b;
      ss >> op;
      ss >> c;
      ss >> lixo;
      ss >> d;
      int num, den;
      if (op == '+') {
         num = a*d + c*b;
         den = b*d;
         int m = mdc(num, den);
         cout << num << "/" << den << " = " << num / m << "/" << den / m << endl;
      } else if (op == '-') {
         num = a*d - c*b;
         den = b*d;
         int m = mdc(num, den);
         cout << num << "/" << den << " = " << num / m << "/" << den / m << endl;
      } else if (op == '*') {
         num = a * c;
         den = b * d;
         int m = mdc(num, den);
         cout << num << "/" << den << " = " << num / m << "/" << den / m << endl;
      } else  {
         num = a * d;
         den = b * c;
         int m = mdc(num, den);
         cout << num << "/" << den << " = " << num / m << "/" << den / m << endl;
      }
   }
   return 0;
}
