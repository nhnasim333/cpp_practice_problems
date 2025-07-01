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
        for (int &x : a)
            cin >> x;
        sort(a.begin(), a.end());
        bool possible = true;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] - a[i - 1] > 1)
            {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}