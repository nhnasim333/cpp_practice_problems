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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long max_prod = 0;
        for (int i = 0; i < n; i++)
        {
            long long prod = 1;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    prod *= (a[j] + 1);
                else
                    prod *= a[j];
            }
            if (prod > max_prod)
                max_prod = prod;
        }
        cout << max_prod << endl;
    }
    return 0;
}