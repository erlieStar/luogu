#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 110;
const int max_num = 0x3f3f3f3f; // 1061109567
int n, m, u, v, w;
int map[maxn][maxn];

void floyd() {
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == j) {
                map[i][j] = 0;
            } else {
                map[i][j] = max_num;
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        cin >> u >> v >> w;
        if (w < map[u][v]) {
            map[u][v] = map[v][u] = w;
        }
    }
    floyd();
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}