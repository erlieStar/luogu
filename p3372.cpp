#include <iostream>
using namespace std;

const int maxn = 1e5 + 10;
int a[maxn];

struct Node {
    int l ,r, sum, tag;
} tree[4 * maxn];

void up(int node) {
    tree[node].sum = tree[node * 2].sum + tree[node * 2 + 1].sum;
}

void down(int node) {
    if (tree[node].tag == 0) {
        return;
    }
    tree[node * 2].tag += tree[node].tag;
    tree[node * 2 + 1].tag += tree[node].tag;
    tree[node * 2].sum += (tree[node * 2].r - tree[node * 2].l + 1) * tree[node].tag;
    tree[node * 2 + 1].sum += (tree[node * 2 + 1].r - tree[node * 2 + 1].l + 1) * tree[node].tag;
    tree[node].tag = 0;
}

void build(int node, int left, int right) {
    tree[node].l = left;
    tree[node].r = right;
    if (left == right) {
        tree[node].sum = a[left];
        return;
    }
    int mid = (left + right) >> 1;
    build(node * 2, left, mid);
    build(node * 2 + 1, mid + 1, right);
    up(node);
}

int query(int node, int left, int right, int start, int end) {
    if (left >= start && right <= end) {
        return tree[node].sum;
    }
    int mid = (left + right) >> 1;
    down(node);
    int sum = 0;
    if (start <= mid) {
        sum += query(node * 2, left, mid, start, end);
    }
    if (end > mid) {
        sum += query(node * 2 + 1, mid + 1, right, start, end);
    }
    return sum;
}

void update(int node, int left, int right, int x, int y, int k) {
    if (x >= left && y <= right) {
        tree[node].tag += k;
        tree[node].sum += (y - x + 1) * k;
        return;
    }
    int mid = (left + right) >> 1;
    down(node);
    if (x <= mid) {
        update(node * 2, left, mid, x, y, k);
    }
    if (y > mid) {
        update(node * 2 + 1, mid + 1, right, x, y, k);
    }
    up(node);
}

int main() {
    int n, m, num, x, y, k;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    build(1, 1, n);
    for (int i = 0; i < m; ++i) {
        cin >> num >> x >> y;
        if (num == 1) {
            cin >> k;
            update(1, 1, n, x, y, k);
        } else {
            cout << query(1, 1, n, x, y) << endl;
        }
    }
    return 0;
}