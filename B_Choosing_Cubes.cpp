#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int v = a[f - 1];
        int greaterCnt = 0, equalCnt = 0;
        for (int x : a)
        {
            if (x > v)
                ++greaterCnt;
            else if (x == v)
                ++equalCnt;
        }

        if (k <= greaterCnt)
        {
            cout << "NO" << endl;
        }
        else if (k >= greaterCnt + equalCnt)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "MAYBE" << endl;
        }
    }
    return 0;
}