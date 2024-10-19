#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int a, f;
    string k;
    string ans[10000];
    cin >> a;
    for (int d = 0; d < a; ++d) {
        cin >> f;
        getline(cin, k);
        for (int i = 0; i < k.length(); ++i) {
            if (k[i] == '?') {
                if (i + 3 == k.length() - 1) {
                    if (k[i - 5] == 'k') {
                        k.replace(i, 1, to_string(f * 1000000));
                    } else {
                        k.replace(i, 1, to_string(f * 1000));
                    }
                } else {
                    k.replace(i, 1, to_string(f * 1000));
                }
            }
        }
        ans[d] = to_string(f) + k;
    }
    for (int i = 0; i < a; ++i) {
        cout << ans[i] << endl;
    }
    return 0;
}