#include <iostream>
using namespace std;

char int_to_char(int a) {
    return a <= 9 ? a + '0' : a - 10 + 'A';
}

int num[30];

int main() {
    int n, r, index = 0;
    cin >> n >> r;
    while (n) {
        num[index++] = n % r;
        n /= r;
    }
    for (int i = index - 1; i >= 0; i--) {
        cout << int_to_char(num[i]);
    }
    return 0;
}