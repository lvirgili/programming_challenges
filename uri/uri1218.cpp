#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int n;
    int c = 1;
    bool p = false;
    while (cin >> n) {
        if (p) cout << endl;
        p = true;
        string s;
        getline(cin, s);
        getline(cin, s);
        stringstream ss;
        ss << s;
        int num;
        char m;
        int pares = 0;
        int f = 0;
        int h = 0;
        while (ss >> num >> m) {
            if (num == n) {
                ++pares;
                if (m == 'F') ++f;
                if (m == 'M') ++h;
            }
        }
        cout << "Caso " << c++ << ":\n";
        cout << "Pares Iguais: " << pares << endl;
        cout << "F: " << f << endl;
        cout << "M: " << h << endl;
    }
    return 0;
}
