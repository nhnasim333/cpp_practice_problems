#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    vector<int> ans(n);

    int mid = n / 2;
    int left = 0, right = mid;

    for (int i = 0; i < n; i++)
    {
        if (i % 2)
            ans[i] = a[left++];
        else
            ans[i] = a[right++];
    }

    int cheap = (n - 1) / 2;
    cout << cheap << endl;
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}