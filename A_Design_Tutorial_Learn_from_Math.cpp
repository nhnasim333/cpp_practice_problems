#include <bits/stdc++.h>
using namespace std;

bool is_composite(int x)
{
    if (x < 4)
        return false;
    for (int i = 2; i * i <= x; ++i)
    {
        if (x % i == 0)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int x = 4; x < n; ++x)
    {
        int y = n - x;
        if (is_composite(x) && is_composite(y))
        {
            cout << x << " " << y << endl;
            break;
        }
    }
    return 0;
}