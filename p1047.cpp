#include <iostream>
using namespace std;

const int maxn = 1e4 + 10;
int a[maxn];

int main() {
    int l, m, u, v, sum = 0;
    cin >> l >> m;
    for (int i = 0; i < m; ++i) {
        cin >> u >> v;
        for (int j = u; j <= v; ++j) {
            a[j] = 1;
        }
    }
    for (int i = 0; i <= l; ++i) {
        if (a[i] == 0) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}