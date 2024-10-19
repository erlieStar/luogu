#include <iostream>
#include <cstring>

using namespace std;

const int maxn = 5010;
const int max_num = 0x3f3f3f3f; // 1061109567
int map[maxn][maxn], visit[maxn];
int lowdist[maxn];
int n, m, x, y, v;

void prim() {
    for (int i = 1; i <= n; ++i) {
        lowdist[i] = map[1][i];
    }
    visit[1] = 1;
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        int min = max_num, k = -1;
        for (int j = 1; j <= n; ++j) {
            if (!visit[j] && lowdist[j] < min) {
                min = lowdist[j];
                k = j;
            }
        }
        if (k == -1) {
            cout << "orz" << endl;
            return;
        }
        visit[k] = 1;
        sum += lowdist[k];
        for (int j = 1; j <= n; ++j) {
            if (!visit[j] && map[k][j] < lowdist[j]) {
                lowdist[j] = map[k][j];
            }
        }
    }
    cout << sum << endl;
}

int main() {
    cin >> n >> m;
    memset(map, max_num, sizeof(map));
    for (int i = 0; i < m; ++i) {
        cin >> x >> y >> v;
        if (v < map[x][y]) {
            map[x][y] = map[y][x] = v;
        }
    }
    prim();
    return 0;
}
