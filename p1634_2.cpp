#include <iostream>
using namespace std;

int main() {
    unsigned long long x, n, sum = 1;
    cin >> x >> n;
    for (unsigned long long i = 0; i < n; ++i) {
        sum = sum * x + sum;
    }
    cout << sum << endl;
    return 0;
}

// 1
// 本次总的数量 = 这次感染的数量 + 上一次总的数量
// 本次总的数量 = 上一次的总数量 * 每个感染的个数 + 上一次总的数量
// 1 * 10 + 1