#include <iostream>
#include <algorithm>
using namespace std;

int a[510], b[510], c[510];

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int index = 0;
    for (int i = str1.length() - 1; i >= 0; i--) {
        a[index++] = str1[i] - '0';
    }
    index = 0;
    for (int i = str2.length() - 1; i >= 0; i--) {
        b[index++] = str2[i] - '0';
    }
    int len = max(str1.length(), str2.length());
    for (int i = 0; i < len; ++i) {
        c[i] += a[i] + b[i];
        c[i + 1] = c[i] / 10;
        c[i] %= 10;
    }
    if (c[len]) {
        cout << c[len];
    }
    for (int i = len - 1; i >= 0; i--) {
        cout << c[i];
    }
    cout << endl;
    return 0;
}