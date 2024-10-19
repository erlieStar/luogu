#include <iostream>
using namespace std;

const int MAX_N = 1e8 + 5;
bool visit[MAX_N];

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        if (!visit[i]) {
            sum++;
            for (int j = 2 * i; j <= n; j += i) {
                visit[j] = true;
            }
        }
    }
    cout << sum << endl;
}
