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
        for (int j = 1; j * time <= m; j++) {
            for (int k = m; k >= time ; --k) {
                dp[k] = max(dp[k], dp[k - time] + score);
            }
        }
    }
    cout << dp[m] << endl;
    return 0;
}