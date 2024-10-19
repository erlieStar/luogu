#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

const int maxn = 1e5 + 10;
int st[maxn][20];

int query(int l, int r) {
    int j = log2(r - l + 1);
    return max(st[l][j], st[r - (1 << j) + 1][j]);
}

int main() {
    int x = log2(17);
    cout << x << endl;
    int n, m, l, r;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &st[i][0]);
    }
    for (int j = 1; (1 << j) <= n; ++j) {
        for (int i = 1; i + (1 << j) - 1 <= n; ++i) {
            st[i][j] = max(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
        }
    }
    for (int i = 0; i < m; ++i) {
        scanf("%d%d", &l, &r);
        printf("%d\n", query(l, r));
    }
    return 0;
}