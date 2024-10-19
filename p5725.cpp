#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%02d", num++);
        }
        printf("\n");
    }
    num = 1;
    printf("\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            printf("  ");
        }
        for (int j = 0; j <= i; ++j) {
            printf("%02d", num++);
        }
        printf("\n");
    }
}