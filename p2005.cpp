#include <iostream>
#include <cstring>
using namespace std;

const int maxn = 1e6 + 10;
int a[maxn], b[maxn], c[maxn], temp[maxn];

void init(int a[]) {
    string str;
    int index = 1;
    cin >> str;
    a[0] = str.length();
    for (int i = a[0] - 1; i >= 0; i--) {
        a[index++] = str[i] - '0';
    }
}

void print(int a[]) {
    if (a[0] == 0) {
        cout << 0 << endl;
        return;
    }
    for (int i = a[0]; i > 0; i--) {
        cout << a[i];
    }
    cout << endl;
}

// 比较a和b的关系
// a > b 则为1
// a < b 则为-1
// a == b 则为0
int compare(int a[], int b[]) {
    if (a[0] > b[0]) {
        return 1;
    }
    if (a[0] < b[0]) {
        return -1;
    }
    for (int i = a[0]; i > 0; i--) {
        if (a[i] > b[i]) {
            return 1;
        }
        if (a[i] < b[i]) {
            return -1;
        }
    }
    return 0;
}

void sub(int a[], int b[]) {
    for (int i = 1; i <= a[0]; ++i) {
        if (a[i] < b[i]) {
            a[i + 1]--;
            a[i] += 10;
        }
        a[i] -= b[i];
    }
    // 修正a的位数
    while (a[0] > 0 && a[a[0]] == 0) {
        a[0]--;
    }
}

// 将a中的元素复制到b中
void numcpy(int a[], int b[], int target) {
    for (int i = 1; i <= a[0]; ++i) {
        b[i + target] = a[i];
    }
    b[0] = a[0] + target;
}

int main() {
    init(a);
    init(b);
    c[0] = a[0] - b[0] + 1;
    for (int i = c[0]; i > 0; i--) {
        memset(temp, 0, sizeof(temp));
        numcpy(b, temp, i - 1);
        while (compare(a, temp) >= 0) {
            c[i]++;
            sub(a, temp);
        }
    }
    while (c[0] > 0 && c[c[0]] == 0) {
        c[0]--;
    }
    print(c);
    return 0;
}