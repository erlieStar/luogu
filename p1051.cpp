#include <iostream>
using namespace std;

struct stu {
    string name;
    int avg_score;
    int class_score;
    char is_cadre;
    char is_west;
    int paper;
} a[105];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].name >> a[i].avg_score >> a[i].class_score >> a[i].is_cadre >> a[i].is_west >> a[i].paper;
    }
    string max_name;
    int max_money = 0, total_money, current_money;
    for (int i = 0; i < n; ++i) {
        current_money = 0;
        if (a[i].avg_score > 80 && a[i].paper >= 1) {
            current_money += 8000;
        }
        if (a[i].avg_score > 85 && a[i].class_score > 80) {
            current_money += 4000;
        }
        if (a[i].avg_score > 90) {
            current_money += 2000;
        }
        if (a[i].avg_score > 85 && a[i].is_west == 'Y') {
            current_money += 1000;
        }
        if (a[i].class_score > 80 && a[i].is_cadre == 'Y') {
            current_money += 850;
        }
        if (current_money > max_money) {
            max_money = current_money;
            max_name = a[i].name;
        }
        total_money += current_money;
    }
    cout << max_name << endl;
    cout << max_money << endl;
    cout << total_money << endl;
    return 0;
}
