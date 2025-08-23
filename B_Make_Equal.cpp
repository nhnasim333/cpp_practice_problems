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
        long long total = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            total += a[i];
        }
        long long avg = total / n;
        bool possible = true;
        long long prefix = 0;
        for (int i = 0; i < n; ++i)
        {
            prefix += a[i];
            long long needed = avg * (i + 1);
            if (prefix < needed)
            {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}