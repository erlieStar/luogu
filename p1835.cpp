#include <iostream>
using namespace std;

const int MAX_SIZE = 50000;
bool visit[MAX_SIZE];
int prime[MAX_SIZE];

void prime_list(int n) {

}

int main() {
    int l, r;
    cin >> l >> r;
    prime_list(r);
    int sum = 0;
    for (int i = l; i <= r; ++i) {
        if (!visit[i]) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}