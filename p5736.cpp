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
    int n, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (is_prime(num)) {
            cout << num << " ";
        }
    }
    return 0;
}