#include <iostream>
using namespace std;

const int MAX_SIZE = 1e6 + 5;
bool visit[MAX_SIZE];
int prime[MAX_SIZE];

void prime_list(int n) {
    int k = 0;
    for (int i = 2; i <= n; ++i) {
        if (!visit[i]) {
            prime[k++] = i;
            for (int j = 2 * i; j <= n; j += i) {
                visit[j] = true;
            }
        }
    }
    visit[1] = true;
}

int main() {
    int n, m, l, r;
    cin >> n >> m;
    prime_list(m);
    for (int i = 0; i < n; ++i) {
        cin >> l >> r;
        if (l < 1 or r > m) {
            cout << "Crossing the line" << endl;
        } else {
            int sum = 0;
            for (int j = l; j <= r; ++j) {
                if (!visit[j]) {
                    sum++;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}