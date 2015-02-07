#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    unsigned n, l, c;
    while (cin >> n >> l >> c) {
        cin.ignore(256, '\n');
        string t;
        getline(cin, t);
        stringstream ss(t);
        string s;
        unsigned linhas = 0;
        unsigned pp = 1;
        string linha;
        while (ss >> s) {
            if (linha.size() == 0) {
                linha = s;
            } else {
                if (linha.size() + s.size() + 1 <= c) {
                    linha += " " + s;
                } else {
                    ++linhas;
                    if (linhas == l) {
                        ++pp;
                        linhas = 0;
                    }
                    linha = s;
                }
            }
        }
        cout << pp << endl;
    }
    return 0;
}
