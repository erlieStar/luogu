#include <iostream>
#include <algorithm>
using namespace std;

int a[55][5];

int main() {
    int n, m;
    char temp;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> temp;
            if (temp == 'W') {
                a[i][0]++;
            } else if (temp == 'B') {
                a[i][1]++;
            } else {
                a[i][2]++;
            }
        }
    }
    int min_num = 3000;
    for (int i = 1; i <= n - 2; ++i) {
        for (int j = i + 1; j <= n - 1; ++j) {
            int sum = 0;
            for (int k = 0; k < i; ++k) {
                sum += a[k][1] + a[k][2];
            }
            for (int k = i; k < j; ++k) {
                sum += a[k][0] + a[k][2];
            }
            for (int k = j; k < n; ++k) {
                sum += a[k][0] + a[k][1];
            }
            min_num = min(min_num, sum);
        }
    }
    cout << min_num << endl;
    return 0;
}
