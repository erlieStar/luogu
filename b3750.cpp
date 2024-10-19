#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; ++i) {
        int num = i;
        while (num != 0) {
            if (!is_prime(num)) {
                break;
            }
            num /= 10;
        }
        if (num == 0) {
            cout << i << endl;
        }
    }
    return 0;
}