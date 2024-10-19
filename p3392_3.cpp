#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int a[55][55];

int main() {
    char temp;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
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
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
    int ans = 3000;
    //枚举红色行数
    for (int w = 1; w <= n - 2; w++) {
        //蓝色行数
        for (int b = w + 1; b <= n - 1; b++) {
            int cnt = 0;
            //涂1到w行
            for (int i = 0; i < w; i++) {
                cnt += (a[i][1] + a[i][2]);
            }
            //涂w+1行到b行
            for (int i = w; i < b; i++) {
                cnt += (a[i][0] + a[i][2]);
            }
            //涂b+1行到n行
            for (int i = b; i < n; i++) {
                cnt += (a[i][0] + a[i][1]);
            }
            ans = min(ans, cnt);
        }
    }
    cout << ans;
    return 0;
}