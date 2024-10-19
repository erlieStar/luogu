#include <iostream>
using namespace std;

const int MAX_N = 100000;
const int ANS = 100003;

int dp[MAX_N + 5] = {0};

int main() {
    int n, k;
    cin >> n >> k;
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = i - 1; j >= i - k && j >= 0; j--) {
            dp[i] = (dp[i] + dp[j]) % ANS;
        }
    }
    cout << dp[n] << endl;
    return 0;
}
