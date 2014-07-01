#include <cstdio>
using namespace std;

int main() {
    int t; scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        int n; scanf("%d", &n);
        int cont = 0;
        while (n > 0) {
            if (n % 2 == 0) n/=2;
            else n--;
            cont++;

        }
        if (cont % 2 == 0) puts("Akash");
        else puts("Aayush");
    }
    return 0;
}
