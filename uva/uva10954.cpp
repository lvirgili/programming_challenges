#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int> > fila;
    int N;
    while (cin >> N, N != 0) {
	for (int i = 0; i < N; ++i) {
	    int x; cin >> x;
	    fila.push(x);
	}
	long total = 0;
	while (fila.size() > 1) {
	    int x = fila.top();
	    fila.pop(); 
	    int y = fila.top();
	    fila.pop();
	    fila.push(x + y);
	    total += x + y;
	}
	cout << total << endl;
	fila.pop();
    }
    return 0;
}
