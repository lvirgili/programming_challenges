#include <iostream>
#include <string>
using namespace std;

int main() {
    string dig;
    string num;
    while (cin >> dig >> num, dig != "0") {
        char d = dig[0];
        bool print = false;
        for (auto &e : num) {
            if (e != d) {
                if (e != '0') {
                    cout << e;
                    print = true;
                } else {
                    if (print) {
                        cout << e;
                        print = false;
                    }
                }
            }
        }
        if (!print) cout << "0";
        cout << endl;
    }
    return 0;
}
