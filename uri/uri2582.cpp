#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> music;
    music.insert(make_pair(0, "PROXYCITY"));
    music.insert(make_pair(1, "P.Y.N.G."));
    music.insert(make_pair(2, "DNSUEY!"));
    music.insert(make_pair(3, "SERVERS"));
    music.insert(make_pair(4, "HOST!"));
    music.insert(make_pair(5, "CRIPTONIZE"));
    music.insert(make_pair(6, "OFFLINE DAY"));
    music.insert(make_pair(7, "SALT"));
    music.insert(make_pair(8, "ANSWER!"));
    music.insert(make_pair(9, "RAR?"));
    music.insert(make_pair(10, "WIFI ANTENNAS"));
    int c; cin >> c;
    while (c--) {
        int x, y; cin >> x >> y;
        cout << music[x + y] << endl;
    }
    return 0;
}