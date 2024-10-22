#include <iostream>
using namespace std;

const int maxn = 5e5 + 10;
int n, m;
int tree[maxn];

int lowbit(int x) {
    return x & -x;
}

void update(int x, int k) {
    while (x <= n) {
        tree[x] += k;
        x += lowbit(x);
    }
}

int sum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += tree[x];
        x -= lowbit(x);
    }
    return sum;
}

int main() {
    int num, x, y;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> num;
        update(i, num);
    }
    for (int i = 0; i < m; ++i) {
        cin >> num >> x >> y;
        if (num == 1) {
            update(x, y);
        } else {
            cout << sum(y) - sum(x - 1) << endl;
        }
    }
    return 0;
}
