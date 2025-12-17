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
        vector<long long> a(n);
        bool hasOdd = false, hasEven = false;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                hasEven = true;
            else
                hasOdd = true;
        }
        if (hasOdd && hasEven)
        {
            vector<long long> b = a;
            sort(b.begin(), b.end());
            for (int i = 0; i < n; ++i)
            {
                cout << b[i] << (i + 1 == n ? '\n' : ' ');
            }
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                cout << a[i] << (i + 1 == n ? '\n' : ' ');
            }
        }
    }
    return 0;
}