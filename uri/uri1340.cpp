#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;
        int op, num;
        bool possible[] = {true, true, true};
        int t = 3;
        while (n--) {
            cin >> op >> num;
            if (op == 1) {
                s.push(num);
                q.push(num);
                pq.push(num);
            } else {
                if (possible[0]) {
                    int rs = s.top();
                    s.pop();
                    if (rs != num) {
                        possible[0] = false;
                        --t;
                    }
                }
                if (possible[1]) {
                    int rq = q.front();
                    q.pop();
                    if (rq != num) {
                        possible[1] = false;
                        --t;
                    }
                }
                if (possible[2]) {
                    int rp = pq.top();
                    pq.pop();
                    if (rp != num) {
                        possible[2] = false;
                        --t;
                    }
                }
            }
        }
        if (t == 0) {
            cout << "impossible\n";
        } else if (t > 1) {
            cout << "not sure\n";
        } else if (possible[0]) {
            cout << "stack\n";
        } else if (possible[1]) {
            cout << "queue\n";
        } else if (possible[2]) {
            cout << "priority queue\n";
        }

    }
    return 0;
}
