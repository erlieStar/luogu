#include <iostream>
using namespace std;

const int N = 1e7;
int prime[N]; // 保存素数
int visit[N] = {0}; // 用来标记是否是合数

int sieve(int n) {
    int k = 0;
    for (int i = 2; i <= n; ++i) {
        if (!visit[i]) {
            prime[k++] = i;
            for (int j = 2; j <= n; j += i) {
                visit[j] = 1;
            }
        }
    }
    return k;
}

int main() {
    int k = sieve(20);
    for (int i = 0; i < k; ++i) {
        cout << prime[i] << " ";
    }
    cout << endl;
}