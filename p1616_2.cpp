#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 1e7 + 10;
long dp[maxn];

int main() {
    int t, m, cost, value;
    cin >> t >> m;
    for (int i = 1; i <= m; ++i) {
        cin >> cost >> value;
        for (int j = cost; j <= t; j++) {
            dp[j] = max(dp[j], dp[j - cost] + value);
        }
    }
    cout << dp[t] << endl;
    return 0;
}