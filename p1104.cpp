#include <iostream>
#include <algorithm>
using namespace std;

struct student {
    string name;
    int year;
    int month;
    int day;
    int index;
} stu[105];

bool cmp(student a, student b) {
    if (a.year != b.year) {
        return a.year < b.year;
    }
    if (a.month != b.month) {
        return a.month < b.month;
    }
    if (a.day != b.day) {
        return a.day < b.day;
    }
    if (a.index != b.index) {
        return a.index > b.index;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> stu[i].name >> stu[i].year >> stu[i].month >> stu[i].day;
        stu[i].index = i;
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << stu[i].name << endl;
    }
    return 0;
}
