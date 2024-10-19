#include <iostream>
using namespace std;

const int MAX_N = 1000;
int dp[MAX_N + 5][MAX_N + 5] = {0};

int main() {
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        dp[x][y] = -1;
    }
    dp[0][1] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (dp[i][j] == -1) {
                dp[i][j] = 0;
                continue;
            }
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 100003;
        }
    }
    cout << dp[n][n] << endl;
    return 0;
}
