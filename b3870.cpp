#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    long long n;
    int num[10], index = 0;
    scanf("%lld", &n);
    if (n == 0) {
        printf("00\n");
        return 0;
    }
    while (n > 0) {
        num[index++] = int(n & 127);
        n >>= 7;
    }
    for (int i = 0; i < index - 1; ++i) {
        num[i] |= 128;
    }
    printf("%02X", num[0]);
    for (int i = 1; i < index; ++i) {
        printf(" %02X", num[i]);
    }
    printf("\n");
    return 0;
}