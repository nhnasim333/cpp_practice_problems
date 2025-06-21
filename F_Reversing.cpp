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
    reverse(arr.begin(), arr.end()); // ----> O(n)
    for (int i = 0; i < n; i++)      // ----> O(n)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Total time complexity: O(n) + O(n) + O(n) = O(n)