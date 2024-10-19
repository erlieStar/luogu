#include <iostream>
using namespace std;

const int MAX_N = 20000;
int a[MAX_N + 5];

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (a[j] < a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    int n, b;
    cin >> n >> b;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        if (sum >= b) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
