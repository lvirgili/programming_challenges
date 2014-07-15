#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin >> n, n != 0) {
        list<char> in;
        for (int i = 0; i < n; ++i) {
            char c; cin >> c;
            in.push_back(c);
        }
        stack<char> station;
        bool imp = false;
        vector<char> out;
        for (int i = 0; i < n; ++i) {
            char ch; cin >> ch;
            out.push_back(ch);
        }
        for (int i = 0; i < n; ++i) {
            char target = out[i];
            if (station.size() > 0 && station.top() == target) {
                cout << "R";
                station.pop();
            } else if (in.size() == 0) {
                if (station.size() > 0 && station.top() == target) {
                    cout << "R";
                    station.pop();
                } else {
                    imp = true;
                    break;
                }
            } else {
                if (find(in.begin(), in.end(), target) != in.end()) {
                    while (in.front() != target) {
                        cout << "I";
                        station.push(in.front());
                        in.pop_front();
                    }
                    in.pop_front();
                    cout << "IR";
                } else {
                    imp = true;
                    break;
                }
            }
        }
        if (imp) {
            cout << " Impossible\n";
        } else {
            cout << endl;
        }
    }
    return 0;
}
