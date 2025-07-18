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
        vector<int> b(n);
        for (int i = 0; i < n; ++i)
            cin >> b[i];
        vector<int> a;
        int l = 0, r = n - 1;
        for (int k = 0; k < n; ++k)
        {
            if (k % 2 == 0)
            {
                a.push_back(b[l++]);
            }
            else
            {
                a.push_back(b[r--]);
            }
        }
        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}