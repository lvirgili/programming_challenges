#include <cstdio>
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int h, m;
    while (scanf("%d:%d", &h, &m) != EOF) {
        bitset<4> hh(h);
        bitset<6> mm(m);
        printf(" ____________________________________________\n");
        printf("|                                            |\n");
        printf("|    ____________________________________    |_\n");
        printf("|   |                                    |   |_)\n");
        printf("|   |   8         4         2         1  |   |\n");
        printf("|   |                                    |   |\n");
        printf("|   |   %c         %c         %c         %c  |   |\n", hh[3]?'o':' ', hh[2]?'o':' ', hh[1]?'o':' ', hh[0]?'o':' ');
        printf("|   |                                    |   |\n");
        printf("|   |                                    |   |\n");
        printf("|   |   %c     %c     %c     %c     %c     %c  |   |\n", mm[5]?'o':' ', mm[4]?'o':' ', mm[3]?'o':' ', mm[2]?'o':' ', mm[1]?'o':' ', mm[0]?'o':' ');
        printf("|   |                                    |   |\n");
        printf("|   |   32    16    8     4     2     1  |   |_\n");
        printf("|   |____________________________________|   |_)\n");
        printf("|                                            |\n");
        printf("|____________________________________________|\n\n");
    }
    return 0;
}
