#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    for (int i = 2; i <= 33850; ++i) {
        l.push_back(i);
    }
    int pos = 0;
    int v[3000];
    while (pos < 3000) {
        v[pos++] = l.front();
        int i = l.front();
        int j = 0;
        for (auto it = l.begin(); it != l.end();) {
            auto it2 = it; ++it2;
            if (j % i == 0) l.erase(it);
            it = it2;
            ++j;
        }
    }

    int n;
    while (cin >> n, n) {
        cout << v[n-1] << endl;
    }
    return 0;
}
