#include <iostream>
using namespace std;

int num[26];

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
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        num[s[i] - 'a']++;
    }
    int maxn = 0, minn = 110;
    for (int i = 0; i < 26; ++i) {
        if (num[i] == 0) {
            continue;
        }
        if (num[i] > maxn) {
            maxn = num[i];
        }
        if (num[i] < minn) {
            minn = num[i];
        }
    }
    if (is_prime(maxn - minn)) {
        cout << "Lucky Word" << endl;
        cout << maxn - minn << endl;
    } else {
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }
    return 0;
}