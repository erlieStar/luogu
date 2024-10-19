#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, num, score;
    string name;
    map<string, int> dict;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (num == 1) {
            cin >> name >> score;
            dict[name] = score;
            cout << "OK" << endl;
        } else if (num == 2) {
            cin >> name;
            if (dict.find(name) != dict.end()) {
                cout << dict[name] << endl;
            } else {
                cout << "Not found" << endl;
            }
        } else if (num == 3) {
            cin >> name;
            if (dict.find(name) != dict.end()) {
                dict.erase(name);
                cout << "Deleted successfully" << endl;
            } else {
                cout << "Not found" << endl;
            }
        } else {
            cout << dict.size() << endl;
        }
    }
    return 0;
}