#include <iostream>
using namespace std;

int num[45][45];

int main() {
    int n, index = 1;
    cin >> n;
    num[1][n / 2 + 1] = index++;
    int last_row = 1, last_column = n / 2 + 1;
    while (index <= n * n) {
        if (last_row == 1 && last_column != n) {
            num[last_row = n][last_column = last_column + 1] = index++;
        }
        if (last_row != 1 && last_column == n) {
            num[last_row = last_row - 1][last_column = 1] = index++;
        }
        if (last_row == 1 && last_column == n) {
            num[last_row = last_row + 1][last_column = last_column] = index++;
        }
        if (last_row != 1 && last_column != n) {
            if (num[last_row - 1][last_column + 1] == 0) {
                num[last_row = last_row - 1][last_column = last_column + 1] = index++;
            } else {
                num[last_row = last_row + 1][last_column = last_column] = index++;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}