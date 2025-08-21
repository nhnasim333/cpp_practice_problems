#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string t;
    cin >> n >> t;
    string s = "";
    for (int i = 0, k = 1; i < n; i += k, ++k) {
        s += t[i];
    }
    cout << s << endl;
    return 0;
}