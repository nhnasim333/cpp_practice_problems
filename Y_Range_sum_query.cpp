#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q; // ----> O(1)
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) // ----> O(n)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++) // ----> O(q)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        for (int j = l - 1; j < r; j++) // ----> O(r - l + 1)
        {
            sum += arr[j];
        }
        cout << sum << endl;
    }

    return 0;
}
