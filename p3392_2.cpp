#include <iostream>
#include <algorithm>

using namespace std;

int n, m, ans = 10000;
char a[55][55];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    //枚举红色行数
    for (int w = 1; w <= n - 2; w++) {
        //蓝色行数
        for (int b = w + 1; b <= n - 1; b++) {
            int cnt = 0;
            //涂1到w行
            for (int i = 0; i < w; i++) {
                for (int j = 0; j < m; j++) {
                    if (a[i][j] != 'W')
                        cnt++;
                }
            }
            //涂w+1行到b行
            for (int i = w; i < b; i++) {
                for (int j = 0; j < m; j++) {
                    if (a[i][j] != 'B')
                        cnt++;
                }
            }
            //涂b+1行到n行
            for (int i = b; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (a[i][j] != 'R')
                        cnt++;
                }
            }
            ans = min(ans, cnt);
        }
    }
    cout << ans;
    return 0;
}