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
        int winner_idx = -1, max_quality = -1;
        for (int i = 1; i <= n; ++i)
        {
            int a, b;
            cin >> a >> b;
            if (a <= 10 && b > max_quality)
            {
                max_quality = b;
                winner_idx = i;
            }
        }
        cout << winner_idx << endl;
    }
    return 0;
}