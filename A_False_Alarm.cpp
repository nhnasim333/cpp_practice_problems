#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool possible = false;
        for (int start = 0; start < n; ++start)
        {
            int time = 0;
            bool ok = true;
            for (int i = 0; i < n; ++i)
            {
                if (a[i] == 0)
                {
                    ++time;
                }
                else
                {
                    if (i >= start && i < start + x)
                    {
                        ++time;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok)
            {
                possible = true;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}