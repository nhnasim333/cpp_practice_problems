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

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long sum_positive = 0;
        long long sum_negative = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                sum_positive += a[i];
            }
            else if (a[i] < 0)
            {
                sum_negative += a[i];
            }
        }

        long long result = abs(sum_positive) - abs(sum_negative);
        result = abs(result);

        cout << result << endl;
    }

    return 0;
}