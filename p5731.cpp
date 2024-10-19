#include <iostream>
using namespace std;

int num[15][15];

int main() {
    int n, index = 1, x = 1, y = 0;
    scanf("%d", &n);
    while (index <= n * n) {
        while (y < n && num[x][y + 1] == 0) {
            num[x][++y] = index++;
        }
        while (x < n && num[x + 1][y] == 0) {
            num[++x][y] = index++;
        }
        while (y > 1 && num[x][y - 1] == 0) {
            num[x][--y] = index++;
        }
        while (x > 1 && num[x - 1][y] == 0) {
            num[--x][y] = index++;
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            printf("%3d", num[i][j]);
        }
        printf("\n");
    }
    return 0;
}