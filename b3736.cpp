#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << gcd(gcd(x, y), z) << endl;
    return 0;
}