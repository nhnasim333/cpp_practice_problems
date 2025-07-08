#include<bits/stdc++.h>
using namespace std;


int main() {
    int a[4];
    for (int i = 0; i < 4; ++i) cin >> a[i];
    string s;
    cin >> s;
    int total = 0;
    for (char c : s) {
        total += a[c - '1'];
    }
    cout << total << endl;
    return 0;
}