#include <iostream>
using namespace std;

int gcd(int m, int n) {
    if (n == 0) {
        return m;
    }
    return gcd(n, m % n);
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << gcd(m, n) << endl;
}

// 第一轮
// a=48 b=18

// a = b
// b = a % b

// 第二轮
// a=18
// b=12

// 第三轮
// a = 12
// b = 6

// a=6
// b=0
