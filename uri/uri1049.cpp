#include <iostream>
#include <string>
using namespace std;

int main() {
    string f, s, t;
    cin >> f >> s >> t;
    if (f == "vertebrado") {
        if (s == "ave") {
            if (t == "carnivoro") {
                cout << "aguia\n";
            } else {
                cout << "pomba\n";
            }
        } else {
            if (t == "onivoro") {
                cout << "homem\n";
            } else {
                cout << "vaca\n";
            }
        }
    } else {
        if (s == "inseto") {
            if (t == "hematofago") {
                cout << "pulga\n";
            } else {
                cout << "lagarta\n";
            }
        } else {
            if (t == "hematofago") {
                cout << "sanguessuga\n";
            } else {
                cout << "minhoca\n";
            }
        }
    }
    return 0;
}
