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
        cout << (n % 4 == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}