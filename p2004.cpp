#include <iostream>
using namespace std;

const int maxn = 1e3 + 10;
int a[maxn][maxn];
long long b[maxn][maxn];

int main() {
    int n, m, c;
    cin >> n >> m >> c;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
            b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j];
        }
    }
    long long max_result = a[1][1], max_x = 1, max_y = 1;
    for (int x1 = 1; x1 <= n - c + 1; ++x1) {
        for (int y1 = 1; y1 <= m - c + 1; ++y1) {
            int x2 = x1 + c - 1, y2 = y1 + c - 1;
            if (x2 <= n && y2 <= m) {
                long long sum = b[x2][y2] - b[x1 - 1][y2] - b[x2][y1 - 1] + b[x1 - 1][y1 - 1];
                if (sum > max_result) {
                    max_result = sum;
                    max_x = x1;
                    max_y = y1;
                }
            }
        }
    }
    cout << max_x << " " << max_y << endl;
    return 0;
}