#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> stack;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '(') {
            stack.push(str[i]);
        }
        if (str[i] == ')') {
            if (stack.empty()) {
                cout << "NO" << endl;
                return 0;
            }
            if (stack.top() == '(') {
                stack.pop();
            }
        }
    }
    // ((())
    // (())(
    if (stack.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}