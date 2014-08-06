#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    vector<int> v(K+1, 0);
    for (int n = 0; n < N; ++n) {
        int x; scanf("%d", &x);
        ++v[x];
    }
    printf("%d\n", *min_element(v.begin() + 1, v.end()));
    return 0;
}
