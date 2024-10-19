#include <iostream>
using namespace std;

int a[30];
int b[30];

void _10_n(int x, int m) {
    int index = 0;
    while (x != 0) {
        a[index++] = x % m;
        x /= m;
    }
    for (int i = index - 1; i >= 0; i--) {
        if (a[i] < 10) {
            printf("%d", a[i]);
        } else {
            printf("%c", a[i] - 10 + 'A');
        }
    }
}

int n_10(int n, int len) {
    int time = 1, sum = 0;
    for (int i = len - 1; i >= 0; i--) {
        sum += b[i] * time;
        time *= n;
    }
    return sum;
}

int main() {
    int n, m, index = 0;
    string str;
    cin >> n >> str >> m;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            b[index++] = str[i] - '0';
        } else {
            b[index++] = str[i] - 'A' + 10;
        };
    }
    int result = n_10(n, index);
    _10_n(result, m);
    return 0;
}

// 123

// 1 2 3
// 0 1 2