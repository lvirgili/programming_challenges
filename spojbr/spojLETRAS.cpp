#include <iostream>
#include <cstdio>
#include <sstream>
using namespace std;

int main() {
    char c;
    cin >> c;
    string s;
    getline(cin, s);
    getline(cin, s);
    int cont = 0, palavras = 0;
    istringstream ss(s);
    string palavra;
    while (ss >> palavra) {
        for (unsigned i = 0; i < palavra.size(); ++i) {
            if (palavra[i] == c) {
                ++cont;
                break;
            }
        }
        ++palavras;
    }
    printf("%.1lf\n", (double)100 * cont / palavras);
    return 0;
}
