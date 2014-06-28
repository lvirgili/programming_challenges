#include <cstdio>
#include <vector>
using namespace std;

vector<long> factors(500001, 1);

void populate() {
    for (unsigned i = 2; i < factors.size(); ++i) {
        unsigned k = i;
        while (k < factors.size()) {
            factors[k] += i;
            k += i;
        }
    }
}

int main() {
    populate();
    long n;
    scanf("%ld", &n);
    for (unsigned i = 0; i < n; ++i) {
        long x;
        scanf("%ld", &x);
        printf("%ld\n", factors[x] - x);
    }
    return 0;
}
