#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    bool has_zero = false;
    int min_ops = 1e9 + 7;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
            has_zero = true;
        min_ops = min(min_ops, abs(x));
    }
    cout << (has_zero ? 0 : min_ops) << endl;
    return 0;
}