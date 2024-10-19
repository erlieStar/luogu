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
    student a[n];
    string name;
    int age, score;
    for (int i = 0; i < n; ++i) {
        cin >> name >> age >> score;
        a[i].name = name;
        a[i].age = age + 1;
        score = score * 1.2 > 600 ? 600 : score * 1.2;
        a[i].score = score;
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i].name << " " << a[i].age << " " << a[i].score << endl;
    }
    return 0;
}
