#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;

    long long ice_cream = x;
    int distressed = 0;

    for (int i = 0; i < n; ++i)
    {
        char op;
        long long d;
        cin >> op >> d;
        if (op == '+')
        {
            ice_cream += d;
        }
        else
        {
            if (ice_cream >= d)
            {
                ice_cream -= d;
            }
            else
            {
                ++distressed;
            }
        }
    }
    cout << ice_cream << " " << distressed << endl;
    return 0;
}