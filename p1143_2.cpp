#include <iostream>
using namespace std;

int char_to_int(char a) {
    return a >= '0' && a <= '9' ? a - '0' : a - 'A' + 10;
}

char int_to_char(int a) {
    return a <= 9 ? '0' + a : a - 10 + 'A';
}

int num[35];

int main() {
    int n, m, sum = 0, time = 1, index = 0;
    string str;
    cin >> n >> str >> m;
    // 先转为10进制
    for (int i = str.length() - 1; i >= 0; i--) {
        sum += char_to_int(str[i]) * time;
        time *= n;
    }
    while (sum) {
        num[index++] = sum % m;
        sum /= m;
    }
    for (int i = index - 1; i >= 0; i--) {
        cout << int_to_char(num[i]);
    }
    return 0;
}