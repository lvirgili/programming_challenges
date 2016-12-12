#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> y >> x;
    char m[x + 2][y + 2];
    for (int i = 0; i < x + 2; ++i) {
        for (int j = 0; j < y + 2; ++j) {
            m[i][j] = '!';
        }
    }
    for (int i = 1; i < x + 1; ++i) {
        for (int j = 1; j < y + 1; ++j) {
            cin >> m[i][j];
        }
    }
    // cout << x << y << endl;
    // for (int i = 0; i < x + 2; ++i) {
    //     for (int j = 0; j < y + 2; ++j) {
    //         cout << m[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    char ins;
    int cx = 1, cy = 1;
    while (true) {
        char cp = m[cx][cy];
        if (cp == '!') {
            cout << "!\n";
            break;
        } else if (cp == '*') {
            cout << "*\n";
            break;
        } else if (cp == '>') {
            ins = '>';
            m[cx][cy] = '!';
        } else if (cp == '<') {
            ins = '<';
            m[cx][cy] = '!';
        } else if (cp == '^') {
            ins = '^';
            m[cx][cy] = '!';
        } else if (cp == 'v') {
            ins = 'v';
            m[cx][cy] = '!';
        }
        if (ins == '>') ++cy;
        else if (ins == '<') --cy;
        else if (ins == '^') --cx;
        else ++cx;
    }
    return 0;
}
