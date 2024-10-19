#include <iostream>
using namespace std;

const int MAX_N = 100;
int a[MAX_N + 5];
int b[MAX_N + 5];

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    int n, index = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, n);
    b[index++] = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] != b[index - 1]) {
            b[index++] = a[i];
        }
    }
    cout << index << endl;
    for (int i = 0; i < index; ++i) {
        cout << b[i] << " ";
    }
    return 0;
}
