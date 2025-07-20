#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        int odd = 0, even = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            if (x % 2)
                odd++;
            else
                even++;
        }
        if (odd && even)
        {
            cout << "YES" << endl;
        }
        else if (odd && n % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}