#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int min_index = 0, max_index = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < a[min_index]) {
            min_index = i;
        }
        if (a[i] > a[max_index]) {
            max_index = i;
        }
    }
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        if (i != max_index && i != min_index) {
            sum += a[i];
        }
    }
    double avg = sum / (n - 2);
    double max_avg = -1;
    for (int i = 0; i < n; ++i) {
        if (i == max_index || i == min_index) {
            continue;
        }
        if (abs(a[i] - avg) > max_avg) {
            max_avg = abs(a[i] - avg);
        }
    }
    printf("%.2f %.2f\n", avg, max_avg);
    return 0;
}

// cout << abs(2 - 3) << endl;
// cout << abs(5 - 4) << endl;