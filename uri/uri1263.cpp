#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>
#include <cctype>
using namespace std;

int main() {
    char l[60000];
    while (fgets(l, 60000, stdin) != NULL) {
        vector<char *> v;
        char *p;
        p = strtok(l, " \n");
        do {
            v.push_back(p);
            p = strtok(NULL, " \n");
        } while (p != NULL);
        int a = 0;
        if (v.size() == 1) {
            a = 0;
        } else if (v.size() == 2) {
            if (tolower(v[0][0]) == tolower(v[1][0])) {
                ++a;
            }
        } else {
            for (unsigned i = 0; i < v.size() - 1; ++i) {
                if (tolower(v[i][0]) == tolower(v[i+1][0])) {
                    ++a;
                    ++i;
                    while (i < v.size() - 1 && tolower(v[i][0]) == tolower(v[i+1][0])) {
                        ++i;
                    }
                }
            }
        }
        cout << a << endl;
    }
    return 0;
}
