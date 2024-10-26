#include <iostream>
using namespace std;

#define l(index) (index * 2)
#define r(index) (index * 2 + 1)

const int maxn = 1e5 + 10;
int a[maxn];

struct Node {
    int l ,r;
    long long sum, tag;
} tree[4 * maxn];

void up(int node) {
    tree[node].sum = tree[l(node)].sum + tree[r(node)].sum;
}

void down(int node) {
    if (tree[node].tag == 0) {
        return;
    }
    tree[l(node)].tag += tree[node].tag;
    tree[r(node)].tag += tree[node].tag;
    tree[l(node)].sum += (tree[l(node)].r - tree[l(node)].l + 1) * tree[node].tag;
    tree[r(node)].sum += (tree[r(node)].r - tree[r(node)].l + 1) * tree[node].tag;
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
    build(l(node), left, mid);
    build(r(node), mid + 1, right);
    up(node);
}

long long query(int node, int left, int right, int start, int end) {
    if (left >= start && right <= end) {
        return tree[node].sum;
    }
    int mid = (left + right) >> 1;
    down(node);
    long long sum = 0;
    if (start <= mid) {
        sum += query(l(node), left, mid, start, end);
    }
    if (end > mid) {
        sum += query(r(node), mid + 1, right, start, end);
    }
    return sum;
}

void update(int node, int left, int right, int x, int y, int k) {
    // 要修改的范围完全包括了节点的范围，加一个懒标记，不再更新
    if (x <= left && y >= right) {
        tree[node].tag += k;
        tree[node].sum += (right - left + 1) * k;
        return;
    }
    int mid = (left + right) >> 1;
    down(node);
    if (x <= mid) {
        update(l(node), left, mid, x, y, k);
    }
    if (y > mid) {
        update(r(node), mid + 1, right, x, y, k);
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