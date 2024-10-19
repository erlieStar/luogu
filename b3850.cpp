#include <iostream>
using namespace std;

int get_num(int num) {
    num *= 7;
    while (num > 9) {
        num = num % 10 + num / 10;
    }
    return num;
}

int main() {
    long long n, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        long long sum = 0, index = 1;
        while (num) {
            if ((index & 1) == 1) {
                sum += get_num(num % 10);
            } else {
                sum += num % 10;
            }
            num /= 10;
            index++;
        }
        cout << (sum % 8 == 0 ? 'T' : 'F') << endl;
    }
    return 0;
}