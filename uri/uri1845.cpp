#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    bool f = false;
    while (scanf("%c", &c) != EOF) {
        if (c == 'f' || c == 'F') {
            if (!f) {
                printf("%c", c);
                f = true;
            }
            continue;
        }
        if (isupper(c)) {
            if (c == 'J' || c == 'P' || c == 'S' || c == 'V' || c == 'B' || c == 'X' || c == 'Z') {
                if (!f) printf("F");
                f = true;
                continue;
            }
        } else {
            if (c == 'j' || c == 'p' || c == 's' || c == 'v' || c == 'b' || c == 'x' || c == 'z') {
                if (!f) printf("f");
                f = true;
                continue;
            }
        }
        printf("%c", c);
        f = false;
        //cout << endl;
    }
    return 0;
}