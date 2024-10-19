#include <iostream>
using namespace std;

const int MAX_N = 1e8 + 5;
bool visit[MAX_N];

int main() {
    long long n, sum = 0;
    cin >> n;
    for (long long i = 2; i <= n; ++i) {
        if (!visit[i]) {
            sum++;
            for (long long j = i * i; j <= n; j += i) {
                visit[j] = true;
            }
        }
    }
    cout << sum << endl;
}
