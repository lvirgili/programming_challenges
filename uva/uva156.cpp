#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    map<string, vector<string> > m;
    string in;
    while (cin >> in, in != "#") {
        string s = in;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        sort(s.begin(), s.end());
        if (m.count(s) == 1) {
            m[s].push_back(in);
        }else {
            vector<string> vec;
            vec.push_back(in);
            m[s] = vec;
        }
    }
    map<string, vector<string> >::iterator it;
    vector<string> to_print;
    for (it = m.begin(); it != m.end(); ++it) {
        if (it->second.size() == 1) {
            to_print.push_back(it->second[0]);
        }
    }
    sort(to_print.begin(), to_print.end());
    for (unsigned i = 0; i < to_print.size(); ++i) {
        cout << to_print[i] << endl;
    }
    return 0;
}
