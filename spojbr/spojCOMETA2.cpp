#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> d;
    int ano = 1986 + 76;
    while (ano <= 11000) {
          d.insert(ano);
          ano += 76;
    }
    cin >> ano;
    set<int>::iterator it = d.upper_bound(ano);
    if (*it == ano) ++it;
    cout << *it << endl;
    cin >> ano;
    return 0;
}
