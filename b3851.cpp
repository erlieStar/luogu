#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int image[20][20];

int char_to_int(char a) {
    return a >= '0' && a <= '9' ? a - '0' : a - 'A' + 10;
}

struct num_count {
    int num;
    int count;
} num_counts[256];

bool cmp(num_count a, num_count b) {
    if (a.count != b.count) {
        return a.count > b.count;
    }
    return a.num < b.num;
}

int compress(int num) {
    int min = 256, result = 0;
    for (int i = 0; i < 16; ++i) {
        int temp = abs(num - num_counts[i].num);
        if (temp < min) {
            min = temp;
            result = i;
        }
    }
    return result;
}

int main() {
    int n, len;
    string str;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        cin >> str;
        len = str.length() / 2;
        for (int j = 0; j < len; ++j) {
            image[i][j] = char_to_int(str[j * 2]) * 16 + char_to_int(str[j * 2 + 1]);
            num_counts[image[i][j]].count++;
            num_counts[image[i][j]].num = image[i][j];
        }
    }
    sort(num_counts, num_counts + 256, cmp);
    for (int i = 0; i < 16; ++i) {
        printf("%02X", num_counts[i].num);
    }
    printf("\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < len; ++j) {
            printf("%X", compress(image[i][j]));
        }
        printf("\n");
    }
    return 0;
}