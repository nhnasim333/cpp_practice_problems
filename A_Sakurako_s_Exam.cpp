#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int total = a + 2 * b;
        if (total % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int target = total / 2;
            bool possible = false;
            for (int y = 0; y <= b; ++y)
            {
                int x = target - 2 * y;
                if (x >= 0 && x <= a)
                {
                    possible = true;
                    break;
                }
            }
            cout << (possible ? "YES" : "NO") << endl;
        }
    }
    return 0;
}