#include <iostream>
#include <queue>
using namespace std;

const int N = 32, M = 32;

int steps[N][M];
int g[N][M];

int n, m;
int ii, ij;
pair<int, int> outs[32 * 32];
int nouts;

int main() {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            g[i][j] = 2;
            steps[i][j] = 32 * 32;
        }
    }
    nouts = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> g[i][j];
            if (g[i][j] == 0) {
                outs[nouts++] = make_pair(i, j);
            }
            if (g[i][j] == 3) {
                ii = i;
                ij = j;
                steps[ii][ij] = 0;
            }
        }
    }
    queue< pair<int, int> > q;
    q.push(make_pair(ii, ij));
    while (!q.empty()) {
        auto p = q.front();
        q.pop();
        int l = p.first, c = p.second;
        if (g[l-1][c] != 2 && steps[l-1][c] > steps[l][c] + 1) {
            q.push(make_pair(l-1, c));
            steps[l-1][c] = steps[l][c] + 1;
        }
        if (g[l+1][c] != 2 && steps[l+1][c] > steps[l][c] + 1) {
            q.push(make_pair(l+1, c));
            steps[l+1][c] = steps[l][c] + 1;
        }
        if (g[l][c-1] != 2 && steps[l][c-1] > steps[l][c] + 1) {
            q.push(make_pair(l, c-1));
            steps[l][c-1] = steps[l][c] + 1;
        }
        if (g[l][c+1] != 2 && steps[l][c+1] > steps[l][c] + 1) {
            q.push(make_pair(l, c+1));
            steps[l][c+1] = steps[l][c] + 1;
        }
    }
    int min = 32 * 32;
    for (int i = 0; i < nouts; ++i) {
        if (steps[outs[i].first][outs[i].second] < min) {
            min = steps[outs[i].first][outs[i].second];
        }
    }
    cout << min << endl;
    return 0;
}
