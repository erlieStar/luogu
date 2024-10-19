#include <iostream>
using namespace std;

int main() {
    int m;
    string n;
    cin >> m >> n;
    int num = n.length() - 1;
    for (int i = 0; i < n.length(); ++i) {
        if (n[i] == '0') {
            num--;
            continue;
        }
        cout << n[i] << "*" << m << "^" << num;
        if (i != n.length() - 1) {
            cout << "+";
        }
        num--;
    }
    return 0;
}