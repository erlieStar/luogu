#include <iostream>
using namespace std;

int fast_pow(int a, int n) {
    int ans = 1;
    while (n) {
        if (n & 1) {
            ans *= a;
        }
        a *= a;
        n >>= 1;
    }
    return ans;
}

int main() {
    cout << fast_pow(10, 2) << endl;
    cout << fast_pow(2, 4) << endl;
    return 0;
}