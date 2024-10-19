#include <iostream>
using namespace std;

const int maxn = 1e7;

struct node {
    int left;
    int right;
} a[maxn];

int dfs(int root) {
    if (!root) {
        return 0;
    }
    return max(dfs(a[root].left), dfs(a[root].right)) + 1;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        cin >> a[i].left >> a[i].right;
    }
    cout << dfs(1) << endl;
    return 0;
}
