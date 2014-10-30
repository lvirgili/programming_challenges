#include <iostream>
#include <vector>
using namespace std;

struct node {
    int val;
    int left, right;
};

void preorder(int pos, vector<node> &tree) {
    cout << " " << tree[pos].val;
    if (tree[pos].left != -1) {
        preorder(tree[pos].left, tree);
    }
    if (tree[pos].right != -1) {
        preorder(tree[pos].right, tree);
    }
}

void inorder(int pos, vector<node> &tree) {
    if (tree[pos].left != -1) {
        inorder(tree[pos].left, tree);
    }
    cout << " " << tree[pos].val;
    if (tree[pos].right != -1) {
        inorder(tree[pos].right, tree);
    }
}

void postorder(int pos, vector<node> &tree) {
    if (tree[pos].left != -1) {
        postorder(tree[pos].left, tree);
    }
    if (tree[pos].right != -1) {
        postorder(tree[pos].right, tree);
    }
    cout << " " << tree[pos].val;
}

int main() {
    int t; cin >> t;
    int cont = 1;
    while (t--) {
        int n; cin >> n;
        vector<node> tree;
        for (int i = 0; i < n; ++i) {
            node lixo;
            lixo.val = lixo.left = lixo.right = -1;
            tree.push_back(lixo);
        }
        while (n--) {
            int x; cin >> x;
            if (tree[0].val == -1) {
                tree[0].val = x;
            } else {
                int pos = 0;
                while (true) {
                    if (x < tree[pos].val) {
                        if (tree[pos].left == -1) {
                            for (unsigned i = 1; i < tree.size(); ++i) {
                                if (tree[i].val == -1) {
                                    tree[pos].left = i;
                                    tree[i].val = x;
                                    break;
                                }
                            }
                            break;
                        } else {
                            pos = tree[pos].left;
                        }
                    } else {
                        if (tree[pos].right == -1) {
                            for (unsigned i = 1; i < tree.size(); ++i) {
                                if (tree[i].val == -1) {
                                    tree[pos].right = i;
                                    tree[i].val = x;
                                    break;
                                }
                            }
                            break;
                        } else {
                            pos = tree[pos].right;
                        }
                    }
                }
            }
        }
        cout << "Case " << cont++ << ":\nPre.:";
        preorder(0, tree);
        cout << "\nIn..:";
        inorder(0, tree);
        cout << "\nPost:";
        postorder(0, tree);
        cout << endl << endl;
    }
    return 0;
}
