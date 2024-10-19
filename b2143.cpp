#include <iostream>
using namespace std;

int a[30];

int main() {
    int x, m, index = 0;
    cin >> x >> m;
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
    return 0;
}