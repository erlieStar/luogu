#include <iostream>
using namespace std;

int main() {
    int n, max = -1000001, sum = 0, result = 0, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (num > max) {
            max = num;
            // 最大值的数量
            sum = 1;
        } else if (num == max) {
            sum++;
        }
        result += num;
    }
    cout << result - sum * max << endl;
    return 0;
}