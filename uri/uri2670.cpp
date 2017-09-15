#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    int v[3];
    cin >> a >> b >> c;
    
    v[0] = b + 2*c;
    v[1] = a + c;
    v[2] = 2*a + b;
    
    sort(v, v + 3);
    
    cout << 2 * v[0] << endl;
    
    return 0;
}