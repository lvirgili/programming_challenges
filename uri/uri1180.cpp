#include <iostream>
#include <cstring>
using namespace std;

struct node {
    int val;
    struct node *left, *right;
};

void add(int x, struct node **r) {
    if (*r == NULL) {
        *r = new struct node;
        (*r)->val = x;
        (*r)->left = (*r)->right = NULL;
    } else if (x < (*r)->val) {
        add(x, &(*r)->left);
    } else {
        add(x, &(*r)->right);
    }
}

void preorder(struct node *r) {
    if (r != NULL) {
        cout << " " << r->val;
        preorder(r->left);
        preorder(r->right);
    }
}

void inorder(struct node *r) {
    if (r != NULL) {
        inorder(r->left);
        cout << " " << r->val;
        inorder(r->right);
    }
}

void postorder(struct node *r) {
    if (r != NULL) {
        postorder(r->left);
        postorder(r->right);
        cout << " " << r->val;
    }
}

int main() {
    int t; cin >> t;
    int cont = 1;
    while (t--) {
        int n; cin >> n;
        struct node *root = NULL;
        while (n--) {
            int x; cin >> x;
            if (root == NULL) {
                root = new struct node;
                root->val = x;
                root->left = root->right = NULL;
            } else {
                if (x < root->val) {
                    add(x, &root->left);
                } else {
                    add(x, &root->right);
                }
            }
        }
        cout << "Case " << cont++ << ":\nPre.:";
        preorder(root);
        cout << "\nIn..:";
        inorder(root);
        cout << "\nPost:";
        postorder(root);
        cout << endl << endl;
    }
    return 0;
}
