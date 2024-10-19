#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        student stu;
        int age, score;
        cin >> stu.name >> age >> score;
        stu.age = age + 1;
        stu.score = score * 1.2 > 600 ? 600 : score * 1.2;
        cout << stu.name << " " << stu.age << " " << stu.score << endl;
    }
    return 0;
}