#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore(256, '\n');
    while (n--) {
        string p1, p2;
        cin >> p1 >> p2;
        if (p1 == "ataque") {
            if (p2 == "ataque") {
                cout << "Aniquilacao mutua\n";
            } else {
                cout << "Jogador 1 venceu\n";
            }
        } else if (p1 == "pedra") {
            if (p2 == "ataque") {
                cout << "Jogador 2 venceu\n";
            } else if (p2 == "pedra") {
                cout << "Sem ganhador\n";
            } else {
                cout << "Jogador 1 venceu\n";
            }
        } else {
            if (p2 == "papel") {
                cout << "Ambos venceram\n";
            } else {
                cout << "Jogador 2 venceu\n";
            }
        }
    }
    return 0;
}
