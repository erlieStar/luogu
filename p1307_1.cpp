#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 0) {
        cout << "-";
        n *= -1;
    }
    int result = 0;
    while (n != 0) {
        int temp = n % 10;
        result = result * 10 + temp;
        n /= 10;
    }
    cout << result << endl;
    return 0;
}


// 1207
// 7
// 120


// 7 * 10 + 0
// 70
// 12


// 70 * 10 + 2 = 702


