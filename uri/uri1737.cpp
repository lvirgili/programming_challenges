#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iomanip>
using namespace std;

bool comp(const pair<double, string> &a, const pair<double, string> &b) {
    if (a.first < b.first) return false;
    else if (a.first > b.first) return true;
    return a.second < b.second;
}

int main() {
    cout << fixed << setprecision(6);
    int n;
    while (cin >> n, n) {
        cin.ignore(256, '\n');
        map<string, int> m;
        string all, l;
        while (n--) {
            getline(cin, l);
            all += l;
        }
        unsigned total = 0;
        for (auto i = 0u; i < all.size() - 1; ++i) {
            string digraph = all.substr(i, 2);
            if (m.count(digraph)) ++m[digraph];
            else m[digraph] = 1;
            ++total;
        }
        pair<double, string> mm[m.size()];
        unsigned ind = 0;
        for (auto &e : m) {
            mm[ind++] = make_pair(1.0 * e.second / total, e.first);
        }
        sort(mm, mm + m.size(), comp);
        for (int i = 0; i < 5; ++i) {
            cout << mm[i].second << ' ' << m[mm[i].second] << ' ' << mm[i].first << endl;
        }
        cout << endl;
    }
    return 0;
}
