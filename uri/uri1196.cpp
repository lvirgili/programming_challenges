#include <iostream>
#include <string>
using namespace std;

int main() {
    string l = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') cout << (char)c;
        else {
            for (unsigned i = 1; i < l.size(); ++i) {
                if (l[i] == c) {
                    cout << l[i-1];
                    break;
                }
            }
        }
    }
    return 0;
}
