#include <iostream>
using namespace std;

const int MAX_N = 100;
int a[MAX_N + 5][MAX_N + 5];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = n - 1; j >= 0; j--) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}