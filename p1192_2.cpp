#include <iostream>
using namespace std;

int dp[100005] = {0};

int main() {
    int n, k;
    cin >> n >> k;
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = i - 1; j >= i - k && j >= 0; j--) {
            dp[i] = (dp[i] + dp[j]) % 100003;
        }
    }
    cout << dp[n] << endl;
    return 0;
}


// 1 - k
// dp[n] = dp[n-1] + dp[n-2] + .. dp[n-k];