#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long c1 = n / 3;
        long long c2 = n / 3;
        if (n % 3 == 1) c1++;
        if (n % 3 == 2) c2++;
        cout << c1 << " " << c2 << endl;
    }
    return 0;
}