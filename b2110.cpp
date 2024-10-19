#include <iostream>
using namespace std;

int num[26];

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        num[s[i] - 'a']++;
    }
    int i;
    for (i = 0; i < s.length(); ++i) {
        if (num[s[i] - 'a'] == 1) {
            cout << s[i] << endl;
            break;
        }
    }
    if (i == s.length()) {
        cout << "no" << endl;
    }
    return 0;
}