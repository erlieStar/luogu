#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int left = 0, right = s.length() - 1;
    while (left <= right) {
        if (s[left] == s[right]) {
            left++;
            right--;
        } else {
            break;
        }
    }
    if (left > right) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}

1  1
abba