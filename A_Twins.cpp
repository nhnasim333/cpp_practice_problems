#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, coins[100], total = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> coins[i];
        total += coins[i];
    }
    sort(coins, coins + n, greater<int>());

    int my_sum = 0, count = 0;
    for (int i = 0; i < n; ++i)
    {
        my_sum += coins[i];
        ++count;
        if (my_sum > total - my_sum)
            break;
    }
    cout << count << endl;
    return 0;
}