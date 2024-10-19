#include <iostream>
using namespace std;

int visit[20010];
int num[110];

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
        visit[num[i]]++;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (num[i] == num[j]) {
                continue;
            }
            if (visit[num[i] + num[j]]) {
                visit[num[i] + num[j]] = 0;
                sum++;
            }
        }
    }
    cout << sum << endl;
    return 0;
}