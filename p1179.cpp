#include <iostream>
using namespace std;

int main() {
    int l, r, sum = 0;
    cin >> l >> r;
    // 2 22
    for (int i = l; i <= r; ++i) {
        int num = i;
        while (num != 0) {
            int a = num % 10;
            if (a == 2) {
                sum++;
            }
            num /= 10;
        }
    }
    cout << sum << endl;
    return 0;
}


// num = 23425

// num % 10 = 5
// num / 10 = 2342

// num % 10 = 2
// num / 10 = 234
