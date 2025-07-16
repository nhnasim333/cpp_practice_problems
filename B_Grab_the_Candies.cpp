#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum_even = 0, sum_odd = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0)
                sum_even += a[i];
            else
                sum_odd += a[i];
        }
        if (sum_even > sum_odd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}