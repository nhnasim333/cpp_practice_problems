#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }
        string vika = "vika";
        int idx = 0;
        for (int col = 0; col < m && idx < 4; ++col)
        {
            for (int row = 0; row < n; ++row)
            {
                if (grid[row][col] == vika[idx])
                {
                    ++idx;
                    break;
                }
            }
        }
        if (idx == 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}