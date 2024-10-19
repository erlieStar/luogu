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
        int num = n % 10;
        result = result * 10 + num;
        n /= 10;
    }
    cout << result << endl;
    return 0;
}