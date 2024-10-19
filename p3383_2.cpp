#include <iostream>
using namespace std;

const int MAX_N = 1e8 + 10;
int prime[MAX_N];
bool visit[MAX_N];

void prime_list(int n) {

}

int main() {
    int n, q, k;
    scanf("%d %d", &n, &q);
    prime_list(n);
    for (int i = 0; i < q; ++i) {
        scanf("%d", &k);
        cout << prime[k - 1] << endl;
    }
}
