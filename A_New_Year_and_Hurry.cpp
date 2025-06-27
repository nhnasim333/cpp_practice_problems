#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int total_time = 240 - k;
    int solved = 0, time_spent = 0;
    for (int i = 1; i <= n; ++i)
    {
        time_spent += 5 * i;
        if (time_spent > total_time)
            break;
        solved++;
    }
    cout << solved << endl;
    return 0;
}