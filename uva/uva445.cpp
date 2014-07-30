#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int ch;
    unsigned quant = 0;
    while ((ch = getchar()) != EOF) {
        if (isdigit(ch)) {
            quant += ch - '0';
        } else if (ch == '!' || ch == '\n') {
            cout << endl;
        } else {
            for (unsigned q = 0; q < quant; ++q) {
                if (ch == 'b') {
                    cout << ' ';
                } else {
                    cout << (char)ch;
                }
            }
            quant = 0;
        }
    }
    return 0;
}
