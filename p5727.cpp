#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int b[200];
    int index = 0;
    while (n != 1) {
        b[index++] = n;
        if (n % 2 == 1) {
            n = n * 3 + 1;
        } else {
            n /= 2;
        }
    }
    b[index] = 1;
    for (int i = index; i >= 0; i--) {
        cout << b[i] << " ";
    }
    return 0;
}