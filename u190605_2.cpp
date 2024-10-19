#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    if (m < n) {
        swap(m, n);
    }
    while (n != 0) {
        int temp = m;
        m = n;
        n = temp % n;
    }
    cout << m << endl;
}


// 第一轮
// a=48 b=18

// 第二轮
// 48 / 18 = 2 余 12
// a=18 b=12

// 第三轮
// 18 / 12 = 1 余 6
// a=12 b=6

// 第四轮
// a=6 b=0