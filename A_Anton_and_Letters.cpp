#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int seen[26] = {0};
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            seen[c - 'a'] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; ++i) {
        count += seen[i];
    }
    cout << count << endl;
    return 0;
}