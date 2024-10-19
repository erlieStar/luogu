#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 1e5;
int a[2 * maxn + 10];

int binary_search_left(int target, int right) {
    int left = 0, result = -1;
    while (left <= right) {
        int mid = (left + right) >> 1;
        if (a[mid] == target) {
            result = mid;
            right = mid - 1;
        } else if (a[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return result;
}

int binary_search_right(int target, int right) {
    int left = 0, result = -1;
    while (left <= right) {
        int mid = (left + right) >> 1;
        if (a[mid] == target) {
            result = mid;
            left = mid + 1;
        } else if (a[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return result;
}

int main() {
    int n, c;
    long long sum = 0;
    cin >> n >> c;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 1; i < n; ++i) {
        int left = binary_search_left(a[i] - c, i - 1);
        if (left == -1) {
            continue;
        }
        int right = binary_search_right(a[i] - c, i - 1);
        sum += right - left + 1;
    }
    cout << sum << endl;
    return 0;
}