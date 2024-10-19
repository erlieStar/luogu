#include <iostream>
using namespace std;

// 中序 左 根 右
// 前序 根 左 右
string a, b;

// 先中序，后前序
void build(int l1, int r1, int l2, int r2) {
    for (int i = l1; i < r1; ++i) {
        if (a[i] == b[l2]) {
            // 构建左子树
            build(l1, i - 1, l2 + 1, i);
            // 构建右子树
            build(i + 1, r1, i + 1, r2);
            cout << a[i];
            return;
        }
    }
}

int main() {
    cin >> a >> b;
    build(0, a.length() - 1, 0, b.length() - 1);
    return 0;
}