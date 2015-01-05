#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

bool comp(const string &a, const string &b) {
    return a.size() > b.size();
}

int main() {
    int n;
    cin >> n;
    cin.ignore(256, '\n');
    while (n--) {
        string l;
        getline(cin, l);
        stringstream ss(l);
        vector<string> v;
        string s;
        while (ss >> s) v.push_back(s);
        stable_sort(v.begin(), v.end(), comp);
        for (auto i = 0u; i < v.size(); ++i) {
            if (i != 0) cout << ' ';
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}
