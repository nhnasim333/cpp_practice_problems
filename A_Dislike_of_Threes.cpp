#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int cnt = 0, num = 0;
        while (cnt < k)
        {
            ++num;
            if (num % 3 != 0 && num % 10 != 3)
                ++cnt;
        }
        cout << num << endl;
    }
    return 0;
}