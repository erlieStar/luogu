#include <iostream>
using namespace std;

const int maxn = 1e5 + 10;
int a[maxn];

int left_search(int n, int target) {
    int result = -1, left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) >> 1;
        if (a[mid] == target) {
            right = mid - 1;
            result = mid;
        } else if (a[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return result;
}

int right_search(int n, int target) {
    int result = -1, left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) >> 1;
        if (a[mid] == target) {
            left = mid + 1;
            result = mid;
        } else if (a[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return result;
}

int binary_search(int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) >> 1;
        if (a[mid] == target) {
            return mid + 1;
        } else if (a[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n, q, num;
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < q; ++i) {
        cin >> num;
        cout << binary_search(n, num) << endl;
    }
    return 0;
}