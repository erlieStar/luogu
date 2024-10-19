#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int num = 'a' - 'A';
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            cout << char(s[i] - num);
        } else {
            cout << s[i];
        }
    }
    return 0;
}