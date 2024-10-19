#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct stu {
    int num;
    int score;
};

bool cmp(stu stu1, stu stu2) {
    if (stu1.score != stu2.score) {
        return stu1.score > stu2.score;
    } else {
        return stu1.num < stu2.num;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    stu a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i].num >> a[i].score;
    }
    sort(a, a + n, cmp);
    m = floor(m * 1.5);
    int socre = a[m - 1].score;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i].score >= socre) {
            count++;
        } else {
            break;
        }
    }
    cout << socre << " " << count << endl;
    for (int i = 0; i < count; ++i) {
        cout << a[i].num << " " << a[i].score << endl;
    }
    return 0;
}
