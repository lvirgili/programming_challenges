#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main() {
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;
    if (r && !a) {
        cout << "Jogador 1 ganha!\n";
    } else if (r && a) {
        cout << "Jogador 2 ganha!\n";
    } else if (!r && a) {
        cout << "Jogador 1 ganha!\n";
    } else {
        int s = j1 + j2;
        if (p) {
            if (s % 2 == 0) {
                cout << "Jogador 1 ganha!\n";
            } else {
                cout << "Jogador 2 ganha!\n";
            }
        } else {
            if (s % 2 == 0) {
                cout << "Jogador 2 ganha!\n";
            } else {
                cout << "Jogador 1 ganha!\n";
            }
        }
    }
    return 0;
}
