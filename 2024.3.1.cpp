#include <iostream>
using namespace std;

int main() {
    int n, sum;
    string str;
    cin >> n;
    cin >> str;
    sum = 0;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            sum += str[i] - 'a' + 1;
        } else {
            sum -= str[i];
        }
    }
    cout << sum << endl;
    return 0;
}