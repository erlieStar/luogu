#include <iostream>
using namespace std;

bool f(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return true;
    }
    return false;
}

int main() {
    int start, end;
    cin >> start >> end;
    int a[3000];
    int index = 0;
    for (int i = start; i <= end; ++i) {
        if (f(i)) {
            a[index++] = i;
        }
    }
    cout << index << endl;
    for (int i = 0; i < index; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}



