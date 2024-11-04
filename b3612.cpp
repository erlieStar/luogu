#include <iostream>
using namespace std;

const int maxn = 1e5 + 10;
int a[maxn], s[maxn];

int main() {
    int n, m, l, r;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> l >> r;
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}