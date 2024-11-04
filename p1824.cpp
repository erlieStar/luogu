#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 2e5 + 10;
int a[maxn];
int n, c;

bool check(int dis) {
    int count = 1, now = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] - now >= dis) {
            now = a[i];
            count++;
        }
    }
    return count >= c;
}

int main() {
    cin >> n >> c;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int result = 0;
    int left = 1;
    int right = a[n - 1] - a[0];
    while (left <= right) {
        int mid = (left + right) / 2;
        if (check(mid)) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << result << endl;
    return 0;
}