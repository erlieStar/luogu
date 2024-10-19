#include <iostream>
using namespace std;

int a[5010], b[5010];

int main() {
    string x;
    int index = 0;
    long long y, num = 0;
    cin >> x >> y;
    for (int i = 0; i < x.length(); ++i) {
        a[index++] = x[i] - '0';
    }
    index = 0;
    for (int i = 0; i < x.length(); ++i) {
        b[index++] = (num * 10 + a[i]) / y;
        num = (num * 10 + a[i]) % y;
    }
    index = 0;
    while (!b[index] && index < x.length() - 1) {
        index++;
    }
    for (int i = index; i < x.length(); ++i) {
        cout << b[i];
    }
    return 0;
}