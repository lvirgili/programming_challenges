#include <iostream>
#include <algorithm>
#include <map>
#include <cstdio>
#include <cmath>
using namespace std;

struct casa {
    int X, Y;
};

bool comp(casa a, casa b) {
    return (a.Y / a.X) < (b.Y / b.X);
}

int main() {
    int N;
    int caso = 1;
    bool flag = false;
    while (cin >> N, N != 0) {
        if (flag) cout << endl;
        flag = false;
        map<int, int> m;
        double consumo = 0;
        long pessoas = 0;
        for (int n = 0; n < N; ++n) {
            int X, Y;
            cin >> X >> Y;
            consumo += Y;
            pessoas += X;
            if (m.count(Y/X)) {
                m[Y/X] += X;
            } else {
                m[Y/X] = X;
            }
        }
        cout << "Cidade# " << caso++ << ":\n";
        map<int,int>::iterator last = m.end();
        --last;
        for (map<int,int>::iterator it = m.begin(); it != last; ++it) {
            cout << it->second << '-' << it->first << ' ';
        }
        cout << last->second << '-' << last->first;
        cout << "\nConsumo medio: ";
        printf("%.2f m3.\n", truncf(100.0 * consumo / pessoas) / 100.0);
        flag = true;
    }
    return 0;

}
