#include <iostream>
#include <algorithm>
using namespace std;

string a[25];

bool cmp(string a, string b) {
    return a + b > b + a;
}

int main() {
    int n;
    string temp;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        a[i] = temp;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << a[i];
    }
    return 0;
}