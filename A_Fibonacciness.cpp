#include <bits/stdc++.h>
using namespace std;

int check(int a1, int a2, int a3, int a4, int a5)
{
    int cnt = 0;
    if (a3 == a1 + a2)
        cnt++;
    if (a4 == a2 + a3)
        cnt++;
    if (a5 == a3 + a4)
        cnt++;
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        vector<int> candidates;
        candidates.push_back(a1 + a2);
        candidates.push_back(a4 - a2);
        candidates.push_back(a5 - a4);
        int ans = 0;
        for (int a3 : candidates)
        {
            ans = max(ans, check(a1, a2, a3, a4, a5));
        }
        cout << ans << endl;
    }
    return 0;
}