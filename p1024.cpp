#include <iostream>
#include <cstdio>
using namespace std;

double a, b, c, d;

double f(double x) {
    return a * x * x * x + b * x * x + c * x + d;
}

int main() {
    double left, right;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    for (double i = -100; i <= 100; ++i) {
        left = i, right = i + 1;
        if (f(left) == 0) {
            printf("%.2lf ", left);
            continue;
        }
        if (f(left) * f(right) >= 0) {
            continue;
        }
        while (right - left >= 0.001) {
            double mid = (left + right) / 2;
            if (f(left) * f(mid) > 0) {
                left = mid;
            } else {
                right = mid;
            }
        }
        printf("%.2lf ", left);
    }
    return 0;
}