#include <iostream>
using namespace std;

const int MAX_N = 30;
int dp[MAX_N + 5][MAX_N + 5] = {0};

int main() {
    int n, m;
    cin >> n >> m;
    dp[0][1] = 1;
    for (int i = 1; i <= m; ++i) {
        for (int j = 2; j <= n - 1; ++j) {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
        }
        dp[i][1] = dp[i - 1][2] + dp[i - 1][n];
        dp[i][n] = dp[i - 1][1] + dp[i - 1][n - 1];
    }
    cout << dp[m][1] << endl;
    return 0;
}
