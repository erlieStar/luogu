#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    long long n;
    int num[10], index = 0;
    scanf("%lld", &n);
    while (n > 0) {
        num[index++] = int(n & 127);
        n >>= 7;
    }
    for (int i = 0; i < index - 1; ++i) {
        printf("%02X ", (num[i] | 128));
    }
    printf("%02X\n", num[index - 1] | 128);
    return 0;
}