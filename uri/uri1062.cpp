#include <iostream>
#include <stack>
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n, n != 0) {
        int v[n];
        for (int c = 0;; ++c) {
            int a; cin >> a;
            if (a == 0) break;
            v[0] = a;
            stack<int> train;
            for (int i = 1; i < n; ++i) {
                cin >> v[i];
            }
            for (int i = n; i > 0; --i) {
                train.push(i);
            }
            stack<int> station;
            bool f = true;

            for (int i = 0; i < n; ++i) {
                int target = v[i];
                if (!station.empty()) {
                    if (station.top() > target) {
                        f = false;
                        break;
                    } else {
                        if (station.top() == target) {
                            station.pop();
                        } else {
                            if (train.empty() || train.top() > target) {
                                f = false;
                                break;
                            } else {
                                while (train.top() != target) {
                                    station.push(train.top());
                                    train.pop();
                                }
                                train.pop();
                            }
                        }
                    }
                } else {
                    if (train.empty() || train.top() > target) {
                        f = false;
                        break;
                    } else {
                        while (train.top() != target) {
                            station.push(train.top());
                            train.pop();
                        }
                        train.pop();
                    }
                }
            }
            if (f && station.empty() && train.empty()) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
        cout << endl;
    }
    return 0;
}
