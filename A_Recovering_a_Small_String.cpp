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
        bool found = false;
        for (int x = 1; x <= 26 && !found; ++x)
        {
            for (int y = 1; y <= 26 && !found; ++y)
            {
                int z = n - x - y;
                if (1 <= z && z <= 26)
                {
                    cout << char('a' + x - 1) << char('a' + y - 1) << char('a' + z - 1) << endl;
                    found = true;
                }
            }
        }
    }
    return 0;
}