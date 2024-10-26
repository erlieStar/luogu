#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 110;
int dp[maxn];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1, v, w, s; i <= n; ++i) {
        cin >> v >> w >> s;
        for (int k = 1; s; s -= k, k *= 2) {
            k = min(s, k); // 确保k的值不会超过剩余物品数量s
            for (int j = m; j >= k * v; j--) {
                dp[j] = max(dp[j], dp[j - k * v] + k * w);
            }
        }
    }
    cout << dp[m] << endl;
    return 0;
}