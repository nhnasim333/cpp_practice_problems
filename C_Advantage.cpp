#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int ti = 0;
    while (ti < t) {
        int n;
        cin >> n;
        vector<int> s(n);
        int mx1 = -1, mx2 = -1;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            if (s[i] > mx1) {
                mx2 = mx1;
                mx1 = s[i];
            } else if (s[i] > mx2) {
                mx2 = s[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == mx1) {
                cout << s[i] - mx2;
            } else {
                cout << s[i] - mx1;
            }
            if (i < n-1) cout << " ";
        }
        cout << endl;
        ti++;
    }
    return 0;
}