#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string result = "";
    for (int i = 0; i < n; ++i) {
        if (s[i] != '.') {
            result += s[i];
        }
    }

    if (result.empty()) {
        cout << "Null" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}