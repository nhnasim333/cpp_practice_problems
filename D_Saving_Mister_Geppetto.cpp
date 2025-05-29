#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;
    int pos[5] = {a, b, c, d, e};
    bool ok = true;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = i + 1; j < 5; ++j)
        {
            if (pos[j] - pos[i] > k)
            {
                ok = false;
                break;
            }
        }
        if (!ok)
            break;
    }
    cout << (ok ? "Yay!" : ":(") << endl;
    return 0;
}