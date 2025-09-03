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
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % n != 0)
        {
            cout << -1 << endl;
            continue;
        }

        long long avg = sum / n;
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > avg)
                ++k;
        }
        cout << k << endl;
    }
    return 0;
}