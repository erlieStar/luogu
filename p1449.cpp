#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;
    int sum = 0, x, y;
    stack<int> stack;
    cin >> str;
    for (int i = 0; i < str.length() - 1; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum = sum * 10 + str[i] - '0';
        } else if (str[i] == '.') {
            stack.push(sum);
            sum = 0;
        } else {
            x = stack.top();
            stack.pop();
            y = stack.top();
            stack.pop();
            switch (str[i]) {
                case '+': stack.push(y + x);
                    break;
                case '-': stack.push(y - x);
                    break;
                case '*': stack.push(y * x);
                    break;
                case '/': stack.push(y / x);
                    break;
            }
        }
    }
    cout << stack.top() << endl;
    return 0;
}