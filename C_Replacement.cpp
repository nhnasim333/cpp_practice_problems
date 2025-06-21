#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            cout << "2" << " ";
        }
        else if (arr[i] > 0)
        {
            cout << "1" << " ";
        }
        else
        {
            cout << "0" << " ";
        }
    }
    return 0;
}