#include <iostream>
using namespace std;

int main() {
    int n, num1, num2;
    string op, last_op;
    string result;
    cin >> op;
    int num = to_int(op);
    cout << num << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> op;
        if (!(op[0] >= 'a' && op[1] <= 'c')) {
            num1 = stoi(op);
            cin >> num2;
            op = last_op;
        } else {
            cin >> num1 >> num2;
            last_op = op;
        }
        switch (op[0]) {
            case 'a':
                result = to_string(num1) + "+" + to_string(num2) + "=" + to_string(num1 + num2);
                break;
            case 'b':
                result = to_string(num1) + "-" + to_string(num2) + "=" + to_string(num1 - num2);
                break;
            case 'c':
                result = to_string(num1) + "*" + to_string(num2) + "=" + to_string(num1 * num2);
                break;
        }
        cout << result << endl;
        cout << result.length() << endl;
    }
    return 0;
}
