#include <iostream>
using namespace std;

int main() {
    int n;
    string name;
    int age, score;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> name >> age >> score;
        cout << name << " " << age << " " << score;
    }
    return 0;
}