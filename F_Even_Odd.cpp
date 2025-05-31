#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> even, odd, A(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
        if (A[i] % 2 == 0)
            even.push_back(A[i]);
        else
            odd.push_back(A[i]);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int e = 0, o = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
            cout << even[e++] << " ";
        else
            cout << odd[o++] << " ";
    }
    cout << endl;
    return 0;
}