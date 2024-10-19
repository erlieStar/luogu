#include <iostream>
using namespace std;

int main() {
    int boy = 0, girl = 0;
    string str;
    cin >> str;
    int len = str.length();
    str += "...";
    for (int i = 0; i < len; ++i) {
        if (str[i] == 'b' || str[i + 1] == 'o' || str[i + 2] == 'y') {
            boy++;
        }
        if (str[i] == 'g' || str[i + 1] == 'i' || str[i + 2] == 'r' || str[i + 3] == 'l') {
            girl++;
        }
    }
    cout << boy << endl;
    cout << girl << endl;
    return 0;
}