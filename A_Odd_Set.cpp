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
        int even = 0, odd = 0;
        for (int i = 0; i < 2 * n; ++i)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even == n && odd == n)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}