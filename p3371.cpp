#include <iostream>
#include <climits>

using namespace std;

const int maxn = 1e4 + 10;
int n, m, st, value;
int map[maxn][maxn];
int lowdist[maxn];
int visit[maxn];

void dijkstra() {
    for (int i = 1; i <= n; ++i) {
        lowdist[i] = map[st][i];
    }
    visit[st] = 1;
    lowdist[st] = 0;
    for (int i = 1; i < n; ++i) {
        int min1 = INT_MAX, k = -1;
        for (int j = 1; j <= n; ++j) {
            if (!visit[j] && lowdist[j] < min1) {
                min1 = lowdist[j];
                k = j;
            }
        }
        if (k == -1) {
            break;
        }
        visit[k] = 1;
        for (int j = 1; j <= n; ++j) {
            if (!visit[j] && map[k][j] != INT_MAX) {
                if (lowdist[k] + map[k][j]  < lowdist[j]) {
                    lowdist[j] = lowdist[k] + map[k][j];
                }
            }
        }
    }
}

int main() {
    int a, b, value;
    cin >> n >> m >> st;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            map[i][j] = INT_MAX;
        }
    }
    for (int i = 0; i < m; ++i) {
        cin >> a >> b >> value;
        if (value < map[a][b]) {
            map[a][b] = value;
        }
    }
    dijkstra();
    for (int i = 1; i <= n; ++i) {
        cout << lowdist[i] << " ";
    }
    return 0;
}
