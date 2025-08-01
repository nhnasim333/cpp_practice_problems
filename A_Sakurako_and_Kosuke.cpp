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
        int x = 0;
        int move = 1;
        bool sakurako = true;
        while (true)
        {
            int step = 2 * move - 1;
            if (sakurako)
                x -= step;
            else
                x += step;
            if (x < -n || x > n)
            {
                cout << (sakurako ? "Sakurako" : "Kosuke") << endl;
                break;
            }
            sakurako = !sakurako;
            ++move;
        }
    }
    return 0;
}