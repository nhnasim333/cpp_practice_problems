#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 1)
            cnt1++;
        else if (x == 2)
            cnt2++;
        else if (x == 3)
            cnt3++;
        else if (x == 4)
            cnt4++;
    }

    int taxis = cnt4;
    int min_13 = min(cnt3, cnt1);
    taxis += cnt3;
    cnt1 -= min_13;

    taxis += cnt2 / 2;
    cnt2 = cnt2 % 2;

    if (cnt2)
    {
        taxis++;
        cnt1 -= min(cnt1, 2);
    }

    if (cnt1 > 0)
    {
        taxis += (cnt1 + 3) / 4;
    }

    cout << taxis << endl;
    return 0;
}