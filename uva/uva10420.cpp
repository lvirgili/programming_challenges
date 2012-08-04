#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(const pair<string,int>& a, const pair<string,int>& b) {
    return a.first < b.first;
}

int main() {
    vector<pair<string, int> > countries;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        bool f = true;
        for (unsigned j = 0; j < countries.size(); ++j) {
            if (countries[j].first == s) {
                ++countries[j].second;
                f = false;
                break;
            }
        }
        if (f == true) {
            countries.push_back(make_pair(s, 1));
        }
        cin.ignore(256, '\n');
    }
    sort(countries.begin(), countries.end(), comp);
    for (unsigned i = 0; i < countries.size(); ++i) {
        cout << countries[i].first << ' ' << countries[i].second << endl;
    }
    return 0;
}
