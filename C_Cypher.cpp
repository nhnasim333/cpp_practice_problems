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
        vector<int> res(n);
        for (int i = 0; i < n; ++i)
        {
            int b;
            string moves;
            cin >> b >> moves;
            int up = 0, down = 0;
            for (char c : moves)
            {
                if (c == 'U')
                    up++;
                else
                    down++;
            }
            int net = up - down;
            res[i] = (a[i] - net + 10) % 10;
        }
        for (int i = 0; i < n; ++i)
            cout << res[i] << (i == n - 1 ? '\n' : ' ');
    }
    return 0;
}