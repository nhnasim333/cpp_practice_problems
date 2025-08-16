#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w, h;
        cin >> n;
        int maxw = 0, maxh = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> w >> h;
            if (w > maxw)
                maxw = w;
            if (h > maxh)
                maxh = h;
        }
        cout << 2 * (maxw + maxh) << endl;
    }
    return 0;
}