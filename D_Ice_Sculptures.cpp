#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; ++i)
        cin >> t[i];

    int answer = -1e9;

    for (int m = 3; m <= n; ++m)
    {
        if (n % m != 0)
            continue;
        int step = n / m;
        for (int offset = 0; offset < step; ++offset)
        {
            int sum = 0;
            for (int i = 0; i < m; ++i)
            {
                int idx = (offset + i * step) % n;
                sum += t[idx];
            }
            answer = max(answer, sum);
        }
    }
    cout << answer << endl;
    return 0;
}