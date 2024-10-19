#include <iostream>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;
    for (int i = 0; i < str.length(); ++i) {
        char ch = (str[i] - 'a' + n) % 26 + 'a';
        cout << ch;
    }
    return 0;
}