#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        long long cycle = a + b + c;
        long long complete_cycles = n / cycle;
        long long days = complete_cycles * 3;
        long long walked = complete_cycles * cycle;
        if (walked >= n)
        {
            if (walked - c >= n)
                days--;
            if (walked - b - c >= n)
                days--;
            cout << days << endl;
            continue;
        }
        // Simulate the remaining days
        long long arr[3] = {a, b, c};
        for (int i = 0; i < 3; i++)
        {
            walked += arr[i];
            days++;
            if (walked >= n)
            {
                cout << days << endl;
                break;
            }
        }
    }
    return 0;
}