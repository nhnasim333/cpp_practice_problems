#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int max_bananas = 0;
        for (int x = 0; x <= 5; x++)
        {
            for (int y = 0; y <= 5 - x; ++y)
            {
                int z = 5 - x - y;
                int bananas = (a + x) * (b + y) * (c + z);
                max_bananas = max(max_bananas, bananas);
            }
        }
        cout << max_bananas << endl;
    }
    return 0;
}