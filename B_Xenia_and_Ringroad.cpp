#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    vector<long long> tasks(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> tasks[i];
    }

    long long time = 0;
    long long current = 1;

    for (int i = 0; i < m; ++i)
    {
        if (tasks[i] >= current)
        {
            time += tasks[i] - current;
        }
        else
        {
            time += n - (current - tasks[i]);
        }
        current = tasks[i];
    }

    cout << time << endl;
    return 0;
}