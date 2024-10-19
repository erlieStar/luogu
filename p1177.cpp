#include <iostream>
using namespace std;

const int MAX_N = 1e5;
int a[MAX_N + 5];
int b[MAX_N + 5];

void quick_sort(int a[], int left, int right) {
    if (left >= right) {
        return;
    }
    int x = left, y = right, z = a[left];
    while (x < y) {
        while (x < y && a[y] > z) {
            y--;
        }
        if (x < y) {
            a[x++] = a[y];
        }
        while (x < y && a[x] < z) {
            x++;
        }
        if (x < y) {
            a[y--] = a[x];
        }
    }
    a[x] = z;
    quick_sort(a, left, x - 1);
    quick_sort(a, x + 1, right);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    quick_sort(a, 0, n - 1);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}
