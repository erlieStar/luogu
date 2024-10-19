#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

struct point {
    double x;
    double y;
};

double dis(point a, point b) {
    double result = pow((a.x - b.x), 2) + pow((a.y - b.y), 2);
    return sqrt(result);
}

int main() {
    point a[3];
    for (int i = 0; i < 3; ++i) {
        cin >> a[i].x >> a[i].y;
    }
    double sum = dis(a[0], a[1]) + dis(a[0], a[2]) + dis(a[1], a[2]);
    printf("%.2f", sum);
    return 0;
}