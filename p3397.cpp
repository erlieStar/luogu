#include <iostream>
using namespace std;

const int maxn = 1e3 + 10;
int a[maxn][maxn];

void add(int x1, int y1, int x2, int y2) {
    a[x1][y1] += 1;
    a[x1][y2 + 1] -= 1;
    a[x2 + 1][y1] -= 1;
    a[x2 + 1][y2 + 1] += 1;
}

int main() {
    int n, m, x1, y1, x2, y2;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        add(x1, y1, x2, y2);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}