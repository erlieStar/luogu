#include <iostream>
using namespace std;

bool is_prime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool judge(int n) {
    string str = to_string(n);
    int i = 0;
    while (i < str.length() / 2) {
        if (str[i] != str[str.length() - 1 - i]) {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    if ((a & 1) == 0) {
        a += 1;
    }
    for (int i = a; i <= b; i += 2) {
        if (judge(i) && is_prime(i)) {
            cout << i << endl;
        }
    }
    return 0;
}