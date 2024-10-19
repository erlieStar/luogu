#include <iostream>
#include <algorithm>
using namespace std;

int num1[1010];
int num2[1010];

int main() {
    int n;
    cin >> n;
    cin >> num1[0];
    for (int i = 1; i < n; ++i) {
        cin >> num1[i];
        num2[i] = abs(num1[i] - num1[i - 1]);
    }
    sort(num2 + 1, num2 + n);
    for (int i = 1; i < n; ++i) {
        if (num2[i] != i) {
            cout << "Not jolly" << endl;
            return 0;
        }
    }
    cout << "Jolly" << endl;
    return 0;
}