#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool found = false;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (arr[mid] == x)
            {
                found = true;
                break;
            }
            else if (arr[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (found)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}