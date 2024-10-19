#include <iostream>
using namespace std;

const int MAX_N = 100;
int visit[MAX_N + 5] = {0};

int main() {
    int n, m, count = 0, index = 0 ,i = 1;
    cin >> n >> m;
    while (count < n) {
        if (visit[i] == 0) {
            index++;
        }
        if (index == m) {
            visit[i] = 1;
            index = 0;
            cout << i << " ";
            count++;
        }
        i++;
        if (i == n + 1) {
            i = 1;
        }
    }
    return 0;
}