#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 1e4 + 10;
int dp[maxn][maxn];

int main() {
    int m, n, score, time;
    cin >> m >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> score >> time;
        for (int j = 0; j <= m; j++) {
            if (j < time) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - time] + score);
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}