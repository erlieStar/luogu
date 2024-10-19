#include <iostream>
using namespace std;

long long f(int k) {
    long long sum = 0;
    for (int i = 0; i < k; ++i) {
        sum = sum * 10 + 9;
    }
    return sum;
}

int main() {
    int t, k;
    long long n;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> k >> n;
        if (n % f(k) == 0) {
            cout << "aya" << endl;
        } else {
            cout << "baka" << endl;
        }
    }
}