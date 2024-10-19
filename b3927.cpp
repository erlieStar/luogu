#include <iostream>
#include <map>
using namespace std;
map<string, string> dict;
int main() {
    int n;
    string text, key, value, temp = "";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> key >> value;
        dict[key] = value;
    }
    cin >> text;
    text += "\n";
    for (int i = 0; i < text.length(); ++i) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            temp += text[i];
        } else {
            if (temp != "") {
                if (dict.count(temp)) {
                    cout << dict[temp];
                } else {
                    cout << "UNK";
                }
                temp = "";
            }
            cout << text[i];
        }
    }
    return 0;
}