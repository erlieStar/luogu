#include <iostream>
using namespace std;

bool is_leap(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return true;
    }
    return false;
}

int main() {
    int x, y;
    cin >> x >> y;
    for (int i = x; i <= y; ++i) {
        if (is_leap(i)) {
            cout << i << " ";
        }
    }
    return 0;
}