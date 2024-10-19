#include <iostream>
#include <algorithm>
using namespace std;

int num1[10010];

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num1[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (num1[j] > num1[j + 1]) {
                swap(num1[j], num1[j + 1]);
                sum++;
            }
        }
    }
    cout << sum << endl;
    return 0;
}