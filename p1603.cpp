#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

map<string, int> dict;
int num[10];

void init_map() {
    dict["one"] = 1; dict["two"] = 2; dict["three"] = 3; dict["four"] = 4; dict["five"] = 5;
    dict["six"] = 6; dict["seven"] = 7; dict["eight"] = 8; dict["nine"] = 9; dict["ten"] = 10;
    dict["eleven"] = 11; dict["twelve"] = 12; dict["thirteen"] = 13; dict["fourteen"] = 14; dict["fifteen"] = 15;
    dict["sixteen"] = 16; dict["seventeen"] = 17; dict["eighteen"] = 18; dict["nineteen"] = 19; dict["twenty"] = 20;
    dict["a"] = 1; dict["both"] = 2; dict["another"] = 1; dict["first"] = 1; dict["second"] = 2; dict["third"] = 3;
}

int main() {
    init_map();
    string s;
    int k = 0;
    for (int i = 0; i < 6; ++i) {
        cin >> s;
        if (dict[s] != 0) {
            int temp = dict[s] * dict[s] % 100;
            if (temp != 0) {
                num[k++] = temp;
            }
        }
    }
    if (k == 0) {
        cout << 0 << endl;
        return 0;
    }
    sort(num, num + k);
    printf("%d", num[0]);
    for (int i = 1; i < k; ++i) {
        printf("%02d", num[i]);
    }
    return 0;
}