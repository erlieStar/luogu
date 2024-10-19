#include <iostream>
using namespace std;

const int max_n = 10090;
int a[max_n], b[max_n], c[max_n];

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    if (str2.length() > str1.length() || (str1.length() == str2.length() && str2.compare(str1) > 0)) {
        swap(str1, str2);
        cout << "-";
    }
    int index = 0;
    for (int i = str1.length() - 1; i >= 0; i--) {
        a[index++] = str1[i] - '0';
    }
    index = 0;
    for (int i = str2.length() - 1; i >= 0; i--) {
        b[index++] = str2[i] - '0';
    }
    for (int i = 0; i < str1.length(); ++i) {
        if (a[i] < b[i]) {
            a[i] += 10;
            a[i + 1] -= 1;
        }
        c[i] = a[i] - b[i];
    }
    int len = str1.length() - 1;
    while (len > 0 && !c[len]) {
        len--;
    }
    for (int i = len; i >= 0; i--) {
        cout << c[i];
    }
    return 0;
}