#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    int max_len = 1, curr_len = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            curr_len++;
        else
            curr_len = 1;
        if (curr_len > max_len)
            max_len = curr_len;
    }
    cout << max_len << endl;
    return 0;
}