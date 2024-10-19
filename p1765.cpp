#include <iostream>
using namespace std;

int main() {
    string s;
    int sum = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'z' || s[i] == 's') {
            sum += 4;
        } else if (s[i] == ' ') {
            sum += 1;
        } else {
            if (s[i] >= 'a' && s[i] <= 'r') {
                sum += (s[i] - 'a') % 3 + 1;
            } else {
                sum += (s[i] - 't') % 3 + 1;
            }
        }
    }
    cout << sum << endl;
    return 0;
}