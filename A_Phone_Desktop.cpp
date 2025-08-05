#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int screens_2x2 = (y + 1) / 2;
        int cells_used = y * 4;
        int cells_in_used_screens = screens_2x2 * 15;
        int cells_left_for_1x1 = cells_in_used_screens - cells_used;
        int x_left = max(0, x - cells_left_for_1x1);
        int screens_1x1 = (x_left + 14) / 15;
        int answer = screens_2x2 + screens_1x1;
        if (x == 0 && y == 0)
            answer = 0;
        cout << answer << endl;
    }
    return 0;
}