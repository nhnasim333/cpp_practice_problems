#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int idx = -1;
        int common = (a[0] == a[1] ? a[0] : (a[0] == a[2] ? a[0] : a[1]));
        for (int i = 0; i < n; ++i) {
            if (a[i] != common) {
                idx = i + 1;
                break;
            }
        }
        cout << idx << endl;
    }
    return 0;
}