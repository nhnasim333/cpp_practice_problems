#include <bits/stdc++.h>
using namespace std;

bool can_sort(vector<int> a)
{
    int n = a.size();
    for (int t = 0; t < 100; t++)
    {
        bool changed = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i - 1] < a[i] && a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                changed = true;
            }
        }
        if (!changed)
            break;
    }
    for (int i = 1; i < n; i++)
        if (a[i - 1] > a[i])
            return false;
    return true;
}

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
        cout << (can_sort(a) ? "YES" : "NO") << endl;
    }
    return 0;
}