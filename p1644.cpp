#include <iostream>
using namespace std;

const int MAX_N = 18;
int dp[MAX_N + 5][MAX_N + 5] = {0};

int main() {
    int n, m;
    cin >> n >> m;
    dp[0][0] = 1;
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i - 2 >= 0 && j - 1 >= 0) {
                dp[i][j] = dp[i - 2][j - 1];
            }
            if (i - 1 >= 0 && j - 2 >= 0) {
                dp[i][j] += dp[i - 1][j - 2];
            }
        }
    }
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << dp[m][n] << endl;
    return 0;
}