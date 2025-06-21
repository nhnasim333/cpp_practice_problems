#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;    // ----> O(1)
    cin >> n; // ----> O(1)
    vector<int> arr(n);
    for (int i = 0; i < n; i++) // ----> O(n)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) // ----> O(n)
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

// // Total time complexity: O(n) + O(n) = O(n)