#include <iostream>
#include <cstring>
using namespace std;

long x[100][100];
int N;

long kadane(long v[100]) {
    long sum = v[0], max = v[0];
    bool allneg = true;
    int maxele = v[0];
    for (long i = 1; i < N; ++i) {
        if (v[i] > 0) {
            allneg = false;
        }
        if (v[i] > maxele) {
            maxele = v[i];
        }
        if (sum < 0) {
            sum = v[i];
        } else {
            sum += v[i];
        }
        if (sum > max) {
            max = sum;
        }
    }
    if (allneg) {
        return maxele;
    }
    return max;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> x[i][j];
        }
    }
    long aux[N];
    long max = x[0][0], sum = x[0][0];
    for (int left = 0; left < N; ++left) {
        memset(aux, 0, sizeof(aux));
        for (int right = left; right < N; ++right) {
            for (int i = 0; i < N; ++i) {
                aux[i] += x[i][right];
            }
            sum = kadane(aux);
            if (sum > max) {
                max = sum;
            }
        }
    }
    cout << max << endl;
    return 0;
}
