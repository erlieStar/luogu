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
        for (int j = 1; j <= s; ++j) {
            for (int k = v; k <= m; k++) {
                dp[k] = max(dp[k], dp[k - v] + w);
            }
        }
    }
    cout << dp[m] << endl;
    return 0;
}