#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int maxn = 6e3 + 10;
int h[maxn], dp[maxn][2], f[maxn];
vector<int> g[maxn];

void dfs(int root) {
    dp[root][0] = 0;
    dp[root][1] = h[root];
    for (int v : g[root]) {
        dfs(v);
        dp[root][0] += max(dp[v][0], dp[v][1]); // 父节点不选，子节点可选可不选
        dp[root][1] += dp[v][0]; // 父节点选择，子节点不能选择
    }
}

int main() {
    int n, son, father;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> h[i];
    }
    for (int i = 1; i <= n - 1; ++i) {
        cin >> son >> father;
        g[father].push_back(son);
        f[son] = father;
    }
    int t = 1;
    while (f[t]) {
        t = f[t];
    }
    dfs(t);
    cout << max(dp[t][0], dp[t][1]) << endl;
    return 0;
}