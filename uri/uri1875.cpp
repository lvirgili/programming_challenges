#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> points;
    
    points.insert(make_pair("R G", 2));
    points.insert(make_pair("R B", 1));
    points.insert(make_pair("G R", 1));
    points.insert(make_pair("G B", 2));
    points.insert(make_pair("B R", 2));
    points.insert(make_pair("B G", 1));
    
    int c; cin >> c;
    while (c--) {
        int t;
        cin >> t;
        cin.ignore(256, '\n');
        int r = 0, g = 0, b = 0;
        while (t--) {
            string x;
            getline(cin, x);
            if (x[0] == 'R') r += points[x];
            else if (x[0] == 'G') g += points[x];
            else b += points[x];
        }
        if (r == g && g == b) cout << "trempate\n";
        else if (r > g && r > b) cout << "red\n";
        else if (g > r && g > b) cout << "green\n";
        else if (b > r && b > g) cout << "blue\n";
        else cout << "empate\n";
    }
    return 0;
}