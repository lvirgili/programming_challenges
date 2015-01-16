#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int V = 512;
int v;
int e;

int g[V][V];

int pq[V];
int p[V];
int s;

int find_min() {
    int m = 0x7ffffff;
    int ind = 0;
    for (int i = 0; i < s; ++i) {
        if (p[pq[i]] < m) {
            m = p[pq[i]];
            ind = i;
        }
    }
    return pq[ind];
}
