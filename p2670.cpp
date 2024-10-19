#include <iostream>
using namespace std;

char a[105][105];
int b[105][105];
int n, m;

// 上、下、左、右、左上、右上、左下、右下
int dir_x[] = {-1, 1, 0, 0, 1, 1, -1, -1};
int dir_y[] = {0, 0, -1, 1, -1, 1, -1, 1};

int get_num(int x, int y) {
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        int new_x = x + dir_x[i];
        int new_y = y + dir_y[i];
        if (new_x < 0 || new_x >= n || new_y < 0 || new_y >= m) {
            continue;
        }
        if (a[new_x][new_y] == '*') {
            sum++;
        }
    }
    return sum;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == '*') {
                cout << '*';
            } else {
                cout << get_num(i, j);
            }
        }
        cout << endl;
    }
}