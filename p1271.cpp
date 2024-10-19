#include <iostream>
using namespace std;

int num1[1000];

int main() {
    int n, m, x;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        num1[x]++;
    }
    for (int i = 0; i < 1000; ++i) {
        while (num1[i]) {
            cout << i << " ";
            num1[i]--;
        }
    }
    return 0;
}