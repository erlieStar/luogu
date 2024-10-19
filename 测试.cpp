#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a[], int b[]) {
    return a[0] < b[0];
}

int main() {
    int a[3][2] = {{3, 2}, {1, 4}, {2, 1}};
    sort(a, a + 3, cmp);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
