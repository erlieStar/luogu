#include <iostream>
#include <cmath>
using namespace std;

int a[1010];

int main() {
    int n, sum, num, result = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            sum = a[i] + a[j];
            num = sqrt(sum);
            if (num * num == sum) {
                result++;
            }
        }
    }
    cout << result << endl;
    return 0;
}