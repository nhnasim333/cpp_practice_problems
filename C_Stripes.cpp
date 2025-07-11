#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string grid[8];
        string empty;
        getline(cin, empty);
        while (empty.empty())
            getline(cin, empty);
        grid[0] = empty;
        for (int i = 1; i < 8; ++i)
            getline(cin, grid[i]);
        bool found_red = false;
        for (int i = 0; i < 8; ++i)
        {
            if (grid[i] == "RRRRRRRR")
            {
                found_red = true;
                break;
            }
        }
        cout << (found_red ? 'R' : 'B') << endl;
    }
    return 0;
}