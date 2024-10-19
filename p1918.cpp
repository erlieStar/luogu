#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 1e5;

struct ball {
    int index;
    int num;
} a[maxn + 10];

bool cmp(ball a, ball b) {
    return a.num < b.num;
}

int binary_search(int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) >> 1;
        if (a[mid].num == target) {
            return a[mid].index;
        } else if (a[mid].num > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return 0;
}

int main() {
    int n, q, target;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].num;
        a[i].index = i + 1;
    }
    sort(a, a + n, cmp);
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> target;
        cout << binary_search(n, target) << endl;
    }
    return 0;
}