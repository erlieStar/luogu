#include <iostream>
using namespace std;

int n;

int f(int x) {
    if (x == n) {
        return 1;
    }
    return (f(x + 1) + 1) * 2;
}

int main() {
    cin >> n;
    cout << f(1) << endl;
}