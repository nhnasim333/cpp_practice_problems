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
        long long sum = 0;
        int temp;
        for (int i = 0; i < n; ++i)
        {
            cin >> temp;
            sum += temp;
        }
        long long root = 1;
        while (root * root < sum)
            ++root;
        if (root * root == sum)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}