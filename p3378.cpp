#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, op, x;
    cin >> n;
    priority_queue<int, vector<int>, greater<int> > minHeap;
    for (int i = 0; i < n; ++i) {
        cin >> op;
        switch (op) {
            case 1:
                cin >> x;
                minHeap.push(x);
                break;
            case 2:
                cout << minHeap.top() << endl;
                break;
            case 3:
                minHeap.pop();
        }
    }
    return 0;
}
