#include <iostream>
using namespace std;

int f(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return f(n - 1) + f(n - 2);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        cout << f(x) << endl;
    }
    return 0;
}