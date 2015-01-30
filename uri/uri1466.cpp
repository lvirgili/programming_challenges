#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

struct node {
    int val;
    struct node *l, *r;
};

bool f;

void insere(int x, node **n) {
    if (*n == nullptr) {
        *n = new node;
        (*n)->val = x;
        (*n)->l = (*n)->r = nullptr;
    } else if (x < (*n)->val) {
        insere(x, &(*n)->l);
    } else {
        insere(x, &(*n)->r);
    }
}

void print(node *n) {
    queue<node *> q;
    q.push(n);
    bool s = false;
    while (!q.empty()) {
        node *t = q.front();
        q.pop();
        if (s) cout << ' ';
        s = true;
        cout << t->val;
        if (t->l != nullptr) q.push(t->l);
        if (t->r != nullptr) q.push(t->r);
    }
    cout << endl;
}

int main() {
    int c;
    cin >> c;
    int k = 1;
    while (c--) {
        int n;
        cin >> n;
        node *t = nullptr;
        while (n--) {
            int x;
            cin >> x;
            insere(x, &t);
        }
        cout << "Case " << k++ << ":\n";
        print(t);
        cout << endl;
    }
    return 0;
}
