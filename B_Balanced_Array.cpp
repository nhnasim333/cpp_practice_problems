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
        if ((n / 2) % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            vector<int> a;
            int even = 2, odd = 1, sum_even = 0, sum_odd = 0;
            for (int i = 0; i < n / 2; ++i)
            {
                a.push_back(even);
                sum_even += even;
                even += 2;
            }
            for (int i = 0; i < n / 2 - 1; ++i)
            {
                a.push_back(odd);
                sum_odd += odd;
                odd += 2;
            }
            a.push_back(sum_even - sum_odd);
            for (int i = 0; i < n; ++i)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}