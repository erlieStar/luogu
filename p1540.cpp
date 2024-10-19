#include <iostream>
#include <queue>
using namespace std;

bool visit[1000];

int main() {
    int m, n, num, result = 0;
    queue<int> queue;
    cin >> m >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (!visit[num]) {
            if (queue.size() >= m) {
                visit[queue.front()] = false;
                queue.pop();
            }
            queue.push(num);
            visit[num] = true;
            result++;
        }
    }
    cout << result << endl;
    return 0;
}