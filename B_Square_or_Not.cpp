#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int k = 1;
        while (k * k < n)
            ++k;
        if (k * k != n)
        {
            cout << "No" << endl;
            continue;
        }
        bool ok = true;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < k; j++)
            {
                int idx = i * k + j;
                if (i == 0 || i == k - 1 || j == 0 || j == k - 1)
                {
                    if (s[idx] != '1')
                        ok = false;
                }
                else
                {
                    if (s[idx] != '0')
                        ok = false;
                }
            }
        }
        cout << (ok ? "Yes" : "No") << endl;
    }
    return 0;
}