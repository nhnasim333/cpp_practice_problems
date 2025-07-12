#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char cur = 'a';
    int total = 0;
    for (char c : s) {
        int d = abs(c - cur);
        total += min(d, 26 - d);
        cur = c;
    }
    cout << total << endl;
    return 0;
}