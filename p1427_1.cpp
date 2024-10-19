#include <iostream>
using namespace std;

void print_num() {
    int num;
    cin >> num;
    if (num == 0) {
        return;
    }
    print_num();
    cout << num << " ";
}

int main() {
    print_num();
    return 0;
}