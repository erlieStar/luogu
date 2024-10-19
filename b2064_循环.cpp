#include <iostream>
using namespace std;

int f(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    int index = 3;
    int a = 1, b = 1;
    while (index <= n) {
        int temp = a;
        a = b;
        b = temp + b;
        index++;
    }
    return b;
}

// 1 1 2 3 5 8

// a = 1
// b = 1

// a = b
// b = a + b

int main() {
    int n, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        cout << f(num) << endl;
    }
    return 0;
}