#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

bool g[26][26];
int in[26], out[26];
bool used[26];
int color[26];

bool connected() {
    int i, j;
    queue<int> q;
    for(i = 0; i < 26; i++) {
	color[i] = (used[i]? 0 : 2);
    }
    i = 0;
    while (color[i] == true) {
	++i;
    }
    color[i] = 1;
    q.push(i);
    while(!q.empty()) {
	i = q.front(); q.pop();
	for(j = 0; j < 26; j++) {
	    if((g[i][j] || g[j][i]) && !color[j]) {
		q.push(j);
		color[j] = 1;
	    }
	}
	color[i] = 2;
    }
    for(i = 0; i < 26; i++) {
	if(color[i] != 2) {
	    return false;
	}
    }
    return true;
}

bool euler_path() {
    if (connected() == false) {
	return false;
    }
    int inout1 = 0, outin1 = 0;
    for (int u = 0; u < 26; ++u) {
	if (out[u] - in[u] == 1) {
	    ++outin1;
	} else if (in[u] - out[u] == 1) {
	    ++inout1;
	} else if (in[u] != out[u]) {
	    return false;
	}
    }
    if ( (inout1 == 0 && outin1 == 0) || (inout1 == 1 && outin1 == 1)) {
	return true;
    }
    return false;
}

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
	int n; cin >> n;
	memset(g, false, sizeof(g));
	memset(in, 0, sizeof(in));
	memset(out, 0, sizeof(out));
	memset(used, 0, sizeof(used));
	for (int j = 0; j < n; ++j) {
	    string s; cin >> s;
	    int u = s[0] - 'a';
	    int v = s[s.size() - 1] - 'a';
	    g[u][v] = 1;
	    ++out[u]; ++in[v];
	    used[u] = used[v] = 1;
	}
	if (euler_path() == true) {
	    cout << "Ordering is possible.\n";
	} else {
	    cout << "The door cannot be opened.\n";
	}
    }
    return 0;
}
