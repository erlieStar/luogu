#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 1e4 + 10;
int dp[maxn];

int main() {
    int m, n, score, time;
    cin >> m >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> score >> time;
        for (int j = time; j <= m; j++) {
            dp[j] = max(dp[j], dp[j - time] + score);
        }
    }
    cout << dp[m] << endl;
    return 0;
}