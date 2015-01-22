#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#define dbg(X) cout << (#X) << " " << (X) << endl;

string pre, in;

void post(string &tree, unsigned pos) {
    if (tree[pos] == 'a') return;
    post(tree, 2*pos);
    post(tree, 2*pos + 1);
    cout << tree[pos];
}

void preorder(string &tree, unsigned pos) {
    if (tree[pos] == 'a') return;
    cout << tree[pos];
    preorder(tree, 2*pos);
    preorder(tree, 2*pos + 1);
}

void inorder(string &tree, unsigned pos) {
    if (tree[pos] == 'a') return;
    inorder(tree, 2*pos);
    cout << tree[pos];
    inorder(tree, 2*pos+1);
}

void build(string& tree, unsigned preb, unsigned pree, unsigned pinb, unsigned pine, unsigned pos) {
    tree[pos] = pre[preb];
    unsigned rootpos = pinb;
    while (in[rootpos] != tree[pos]) ++rootpos;
    unsigned num = rootpos - pinb;
    unsigned numcp = num;
    unsigned i = preb + 1;
    while (numcp--) {
        ++i;
    }
    if (i > preb + 1) build(tree, preb + 1, i, pinb, rootpos, 2*pos);
    if (pree > i) build(tree, i, pree, rootpos+1, pine, 2*pos+1);
}

int main() {
    while (cin >> pre >> in) {
        string tree(pow(2, pre.size() + 1), 'a');
        build(tree, 0, pre.size(), 0, in.size(), 1);
        post(tree, 1);
        cout << endl;
    }
    return 0;
}
