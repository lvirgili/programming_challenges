#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
#include "codon_table.hpp"
     char ch;
     string codon;
     while (cin >> ch) {
          codon.push_back(ch);
          if (codon.size() == 3) {
               if (codon_table[codon] == "Stop") {
                    break;
               }
               cout << codon_table[codon];
               codon.clear();
          }
     }
     cout << endl;
     return 0;
}
