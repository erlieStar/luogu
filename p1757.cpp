#include <iostream>
#include <algorithm>
using namespace std;

int w[110][1010], v[110][1010], dp[1010];

int main() {
    int m, n, a, b, c, maxc = 0;
    cin >> m >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
        w[c][++w[c][0]] = a;
        v[c][++v[c][0]] = b;
        maxc = max(maxc, c);
    }
    for (int i = 1; i <= maxc; ++i) {
        for (int j = m; j >= 0; --j) {
            for (int k = 1; k <= w[i][0]; ++k) {
                if (j >= w[i][k]) {
                    dp[j] = max(dp[j], dp[j - w[i][k]] + v[i][k]);
                }
            }
        }
    }
    cout << dp[m] << endl;
    return 0;
}