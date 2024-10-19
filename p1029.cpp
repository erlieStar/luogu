#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int x, y;
    cin >> x >> y;
    int sum = 0;
    for (int i = x; i * i <= y; ++i) {
    }
    return 0;
}

// 1

// 2
// 2 1

// 3
// 3 1

// 4
// 4 1
// 4 2
// 4 2 1

// 5
// 5 1
// 5 2
// 5 2 1

// 6
// 6 1
// 6 2
// 6 2 1
// 6 3
// 6 3 1


