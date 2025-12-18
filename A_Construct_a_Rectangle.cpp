#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        long long l1, l2, l3;
        cin >> l1 >> l2 >> l3;
        array<long long, 3> a = {l1, l2, l3};
        sort(a.begin(), a.end());

        bool ok = false;
        if (a[0] + a[1] == a[2])
            ok = true;
        else if (a[0] == a[1] && a[2] % 2 == 0)
            ok = true;
        else if (a[1] == a[2] && a[0] % 2 == 0)
            ok = true;

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}