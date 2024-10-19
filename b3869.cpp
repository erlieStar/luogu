#include <iostream>
using namespace std;

int char_to_int(char a) {
    return a >= '0' && a <= '9' ? a - '0' : a - 'A' + 10;
}

int main() {
    int n, k;
    long long time, sum;
    string str;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> k >> str;
        sum = 0;
        time = 1;
        for (int j = str.length() - 1; j >= 0; j--) {
            sum += char_to_int(str[j]) * time;
            time *= k;
        }
        cout << sum << endl;
    }
    return 0;
}