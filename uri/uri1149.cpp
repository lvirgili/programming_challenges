#include <iostream>
using namespace std;

int main() {
    int A, N;
    cin >> A >> N;
    while (N <= 0)
        cin >> N;
    long soma = 0;
    for (int i = A; i < (A + N); ++i)
        soma += i;
    cout << soma << endl;
    return 0;
}
