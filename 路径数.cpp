#include <iostream>
using namespace std;

int cal_count_1(int m, int n) {
    int dp[m][n];
    //memset(dp, 0, sizeof(dp));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == 0) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }
    return dp[m - 1][n - 1];
}

int cal_count_2(int m, int n) {
    int dp[m + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0][1] = 1;
    // dp[1][0] = 1;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[m][n];
}

int main() {
    cout << cal_count_1(10, 10) << endl;
    cout << cal_count_2(10, 10) << endl;
}