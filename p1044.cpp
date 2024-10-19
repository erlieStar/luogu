#include <iostream>
using namespace std;

int dp[20];

int main() {
    int n;
    cin >> n;
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i] += dp[j - 1] * dp[i - j];
        }
    }
    cout << dp[n] << endl;
    return 0;
}
