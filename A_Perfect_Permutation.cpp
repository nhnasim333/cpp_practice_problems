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

        vector<int> p(n + 1);

        for (int i = 1; i <= n; i += 2)
        {
            if (i + 1 <= n)
            {
                p[i] = i + 1;
                p[i + 1] = i;
            }
            else
            {
                p[i] = i;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << p[i];
            if (i < n)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}