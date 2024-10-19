#include <iostream>
using namespace std;

const int maxn = 1e6 + 10;
int a[maxn];
int n, m, num;

int binary_search(int target) {
    int left = 0, right = n - 1, result = -1;
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

int main() {
    int result;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> num;
        result = binary_search(num);
        cout << (result == -1 ? -1 : result + 1) << " ";
    }
    return 0;
}