#include <iostream>
using namespace std;

// 冒泡排序
void sort_1(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

// 选择排序
void sort_2(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[index] > a[j]) {
                index = j;
            }
        }
        if (index != i) {
            swap(a[index], a[i]);
        }
    }
}

// 插入排序
void sort_3(int a[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            while (a[j] < a[j - 1]) {
                swap(a[j], a[j - 1]);
            }
        }
    }
}

void sort_3_2(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = a[i];
        int j;
        for (j = i - 1; j >= 0 && a[j] > temp; j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }
}


// 快速排序
void quick_sort(int a[], int left, int right) {
    if (left >= right) {
        return;
    }
    int x = left, y = right, z = a[left];
    while (x < y) {
        while (x < y && a[y] > z) {
            y--;
        }
        if (x < y) {
            a[x++] = a[y];
        }
        while (x < y && a[x] < z) {
            x++;
        }
        if (x < y) {
            a[y--] = a[x];
        }
    }
    a[x] = z;
    quick_sort(a, left, x - 1);
    quick_sort(a, x + 1, right);
}

int main() {
    //int a[5] = {3, 7, 4, 2, 1};
    int a[5] = {7, 6, 5, 4, 3};
    // sort_1(a, 5);
    // quick_sort(a, 0, 4);
    sort_3_2(a, 5);
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}