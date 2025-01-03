#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, m, x, y;
    string s, t;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        if (m == 1) {
            cin >> t;
            s += t;
            cout << s << endl;
        } else if (m == 2) {
            cin >> x >> y;
            s = s.substr(x, y);
            cout << s << endl;
        } else if (m == 3) {
            cin >> x >> t;
            s.insert(x, t);
            cout << s << endl;
        } else if (m == 4) {
            cin >> t;
            int pos = s.find(t);
            if (pos != string::npos) {
                cout << pos << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
