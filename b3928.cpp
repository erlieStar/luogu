#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 50000;
int a[50000 + 5];
int b[50000 + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int index = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > b[index]) {
            index++;
        }
    }
    cout << index << endl;
    return 0;
}