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
        int a[55];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        bool odd_same = true, even_same = true;
        for (int i = 2; i < n; i += 2)
            if (a[i] % 2 != a[0] % 2)
                odd_same = false;
        for (int i = 1; i < n; i += 2)
            if (a[i] % 2 != a[1] % 2)
                even_same = false;
        cout << ((odd_same && even_same) ? "YES" : "NO") << endl;
    }
    return 0;
}