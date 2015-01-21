#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct node {
    char val;
    struct node *l, *r;
};

bool f;

void insere(char x, node **n) {
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

void infixa(node *n) {
    if (n->l != nullptr) infixa(n->l);
    if (f) cout << " ";
    cout << n->val;
    f = true;
    if (n->r != nullptr) infixa(n->r);
}

void prefixa(node *n) {
    if (f) cout << " ";
    cout << n->val;
    f = true;
    if (n->l != nullptr) prefixa(n->l);
    if (n->r != nullptr) prefixa(n->r);
}

void posfixa(node *n) {
    if (n->l != nullptr) posfixa(n->l);
    if (n->r != nullptr) posfixa(n->r);
    if (f) cout << " ";
    cout << n->val;
    f = true;
}

bool existe(char x, node *n) {
    if (n == nullptr) return false;
    else if (n->val == x) return true;
    else if (x < n->val) return existe(x, n->l);
    else return existe(x, n->r);
}

int main() {
    string ins;
    node *t = nullptr;
    while (getline(cin, ins)) {
        f = false;
        if (ins == "INFIXA") {
            infixa(t);
            cout << endl;
        } else if (ins == "PREFIXA") {
            prefixa(t);
            cout << endl;
        } else if (ins == "POSFIXA") {
            posfixa(t);
            cout << endl;
        } else if (ins.size() == 3 && ins[0] == 'I') {
            insere(ins[2], &t);
        } else {
            if (existe(ins[2], t)) cout << ins[2] << " existe\n";
            else cout << ins[2] << " nao existe\n";
        }
    }
    return 0;
}
