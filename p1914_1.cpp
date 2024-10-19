#include <iostream>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;
    for (int i = 0; i < str.length(); ++i) {
        str[i] += n;
        if (str[i] > 'z') {
            str[i] -= 26;
        }
    }
    cout << str << endl;
    return 0;
}