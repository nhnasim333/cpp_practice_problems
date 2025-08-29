#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int base = 1000000;
        for (int i = 0; i < n; ++i)
        {
            cout << base + i << (i == n - 1 ? "\n" : " ");
        }
    }
    return 0;
}