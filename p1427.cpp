#include <iostream>
using namespace std;

int main() {
    int a[110];
    int num, index = 0;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        // a[index++] = num;
        a[index] = num;
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;
}