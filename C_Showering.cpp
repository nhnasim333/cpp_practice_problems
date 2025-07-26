#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s, m;
        cin >> n >> s >> m;
        vector<pair<long long, long long>> tasks(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> tasks[i].first >> tasks[i].second;
        }

        bool can_shower = false;
        long long prev_end = 0;
        for (int i = 0; i < n; ++i)
        {
            long long free_time = tasks[i].first - prev_end;
            if (free_time >= s)
                can_shower = true;
            prev_end = tasks[i].second;
        }
        if (m - prev_end >= s)
            can_shower = true;

        cout << (can_shower ? "YES" : "NO") << endl;
    }
    return 0;
}