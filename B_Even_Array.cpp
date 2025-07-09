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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        int odd_index_even_val = 0, even_index_odd_val = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != a[i] % 2)
            {
                if (i % 2 == 0)
                    even_index_odd_val++;
                else
                    odd_index_even_val++;
            }
        }
        if (even_index_odd_val != odd_index_even_val)
            cout << -1 << "\n";
        else
            cout << even_index_odd_val << "\n";
    }
    return 0;
}