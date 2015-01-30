#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore(256, '\n');
        int n;
        cin >> n;
        cin.ignore(256, '\n');
        string line;
        string ws[n];
        bool ar = false;
        bool en = false;
        int en_pos;
        for (int i = 0; i < n; ++i) {
            cin >> ws[i];
            if (ws[i][0] == '#') ar = true;
            else {en = true; en_pos = i;};
        }
        if ((ar && !en) || (!ar && en)) {
            for (int i = 0; i < n; ++i) {
                if (i > 0) cout << ' ';
                cout << ws[i];
            }
            cout << endl;
        } else {
            for (int i = en_pos + 1; i < n; ++i) {
                cout << ws[i] << ' ';
            }
            cout << ws[en_pos] << ' ';
            for (int i = 0; i < en_pos - 1; ++i) {
                cout << ws[i] << ' ';
            }
            if (en_pos >= 1)
                cout << ' ' << ws[en_pos - 1] << endl;
            else
                cout << endl;
        }
    }
    return 0;
}
