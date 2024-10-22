#include <iostream>
using namespace std;

const int maxn = 1e4 + 10;
int fa[maxn];

int find(int x) {
    return x == fa[x] ? x : fa[x] = find(fa[x]);
}

void merge(int x, int y) {
    int a = find(x);
    int b = find(y);
    if (a != b) {
        fa[a] = b;
    }
}

int main() {
    int n, m, z, x, y;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        fa[i] = i;
    }
    for (int i = 0; i < m; ++i) {
        cin >> z >> x >> y;
        if (z == 1) {
            merge(x, y);
        } else {
            if (find(x) == find(y)) {
                cout << "Y" << endl;
            } else {
                cout << "N" << endl;
            }
        }
    }
    return 0;
}
