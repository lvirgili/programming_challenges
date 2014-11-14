#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        bool closei = false, closeb = false;
        for (auto &c : s) {
            if (c == '_') {
                if (closei) {
                    cout << "</i>";
                    closei = false;
                } else {
                    cout << "<i>";
                    closei = true;
                }
            } else if (c == '*') {
                if (closeb) {
                    cout << "</b>";
                    closeb = false;
                } else {
                    cout << "<b>";
                    closeb = true;
                }
            } else {
                cout << c;
            }
        }
        cout << endl;
    }
    return 0;
}
