#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        long long dog_need = max(0LL, x - a);
        long long cat_need = max(0LL, y - b);
        if (dog_need + cat_need <= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}