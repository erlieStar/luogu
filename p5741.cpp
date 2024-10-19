#include <iostream>
#include <algorithm>
using namespace std;

struct student {
    string name;
    int chinese;
    int math;
    int english;
    int total;
} stu[1002];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> stu[i].name >> stu[i].chinese >> stu[i].math >> stu[i].english;
        stu[i].total = stu[i].chinese + stu[i].math + stu[i].english;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (abs(stu[i].chinese - stu[j].chinese) <= 5
            && abs(stu[i].math - stu[j].math) <= 5
            && abs(stu[i].english - stu[j].english) <= 5
            && abs(stu[i].total - stu[j].total) <= 10) {
                cout << stu[i].name << " " << stu[j].name << endl;
            }
        }
    }
    return 0;
}