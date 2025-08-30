#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = n / 10 + (n % 10 == 9);
        cout << ans << endl;
    }
    return 0;
}