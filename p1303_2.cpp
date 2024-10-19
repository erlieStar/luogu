#include <iostream>
using namespace std;

int a[4010], b[4010], c[4010];

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
    for (int i = 0; i < str1.length(); ++i) {
        for (int j = 0; j < str2.length(); ++j) {
            c[i + j] += a[i] * b[j];
            c[i + j + 1] += c[i + j] / 10;
            c[i + j] %= 10;
        }
    }
    int len = str1.length() + str2.length() - 1;
    while (len > 0 && !c[len]) {
        len--;
    }
    for (int i = len; i >= 0; i--) {
        cout << c[i];
    }
    return 0;
}