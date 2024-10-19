#include <iostream>
using namespace std;

int main() {
    string str, text;
    getline(cin, str);
    getline(cin, text);
    for (int i = 0; i < str.length(); ++i) {
        str[i] = tolower(str[i]);
    }
    for (int i = 0; i < text.length(); ++i) {
        text[i] = tolower(text[i]);
    }
    str = ' ' + str + ' ';
    text = ' ' + text + ' ';
    int first = text.find(str);
    if (first == -1) {
        cout << -1 << endl;
        return 0;
    }
    int count = 1, temp = first;
    while ((first = text.find(str, first + 1)) != -1) {
        count++;
    }
    cout << count << " " << temp << endl;
    return 0;
}