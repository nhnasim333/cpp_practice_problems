#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt1 = 0, cnt2 = 0;
        cin >> n;
        for (int i = 0, x; i < n; ++i)
        {
            cin >> x;
            if (x == 1)
                cnt1++;
            else
                cnt2++;
        }
        int sum = cnt1 + 2 * cnt2;
        if (sum % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            int half = sum / 2;
            if ((half % 2 == 1 && cnt1 == 0))
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
    return 0;
}