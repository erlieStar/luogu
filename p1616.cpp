#include <iostream>
using namespace std;

int main() {
    unsigned long long x, n, sum = 1;
    cin >> x >> n;
    for (int i = 0; i < n; ++i) {
        sum = sum * x + sum;
    }
    cout << sum << endl;
    return 0;
}