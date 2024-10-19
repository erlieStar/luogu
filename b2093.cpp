#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> x;
    int result = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
            result = i;
            break;
        }
    }
    cout << result << endl;
    return 0;
}