#include <iostream>
using namespace std;

const int maxn = 5e5 + 10;
int a[maxn], b[4 * maxn];

void build(int node, int left, int right) {
    if (left == right) {
        b[node] = a[left];
        return;
    }
    int mid = (left + right) >> 1;
    build(node * 2, left, mid);
    build(node * 2 + 1, mid + 1, right);
    b[node] = b[node * 2] + b[node * 2 + 1];
}

int query(int node, int left, int right, int start, int end) {
    if (left >= start && right <= end) {
        return b[node];
    }
    int mid = (left + right) >> 1;
    int sum = 0;
    if (start <= mid) {
        sum += query(node * 2, left, mid, start, end);
    }
    if (end > mid) {
        sum += query(node * 2 + 1, mid + 1, right, start, end);
    }
    return sum;
}

void update(int node, int left, int right, int index, int value) {
    if (left == right) {
        b[node] += value;
        return;
    }
    int mid = (left + right) >> 1;
    if (index <= mid) {
        update(node * 2, left, mid, index, value);
    }
    if (index > mid) {
        update(node * 2 + 1, mid + 1, right, index, value);
    }
    b[node] = b[node * 2] + b[node * 2 + 1];
}

int main() {
    int n, m, num, x, y;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    build(1, 1, n);
    for (int i = 0; i < m; ++i) {
        cin >> num >> x >> y;
        if (num == 1) {
            update(1, 1, n, x, y);
        } else {
            cout << query(1, 1, n, x, y) << endl;
        }
    }
    return 0;
}
