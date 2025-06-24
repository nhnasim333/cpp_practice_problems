#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int even = 0, odd = 0;
    int even_idx = -1, odd_idx = -1;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] % 2 == 0)
        {
            even++;
            even_idx = i + 1;
        }
        else
        {
            odd++;
            odd_idx = i + 1;
        }
    }
    if (even == 1)
        cout << even_idx << endl;
    else
        cout << odd_idx << endl;
    return 0;
}