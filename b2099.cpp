#include <iostream>
using namespace std;

int a[5][5];

int main() {
    int m, n, temp;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> a[i][j];
        }
    }
    cin >> m >> n;
    for (int i = 0; i < 5; ++i) {
        temp = a[m - 1][i];
        a[m - 1][i] = a[n - 1][i];
        a[n - 1][i] = temp;
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}