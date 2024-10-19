#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 2e5 + 10;
int n, m;

struct node {
    int x, y;
    int v;
} road[maxn];

int f[maxn];

bool cmp(node a, node b) {
    return a.v < b.v;
}

int find(int x) {
    return x == f[x] ? x : f[x] = find(f[x]);
}

void kruskal() {
    int sum = 0, count = 0;
    for (int i = 0; i < m; ++i) {
        int fx = find(road[i].x);
        int fy = find(road[i].y);
        if (fx != fy) {
            f[fx] = fy;
            sum += road[i].v;
            count++;
        }
        if (count == n - 1) {
            break;
        }
    }
    if (count == n - 1) {
        cout << sum << endl;
    } else {
        cout << "orz" << endl;
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        f[i] = i;
    }
    for (int i = 0; i < m; ++i) {
        cin >> road[i].x >> road[i].y >> road[i].v;
    }
    sort(road, road + m, cmp);
    kruskal();
    return 0;
}
