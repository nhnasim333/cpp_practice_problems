#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // ----> O(1)
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) // ----> O(n)
    {
        cin >> arr[i];
    }
    int count = 0;              // ----> O(1)
    for (int i = 0; i < n; i++) // ----> O(n)
    {
        for (int j = 0; j < n; j++) // ----> O(n)
        {
            if (arr[i] + 1 == arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}

// // Total time complexity: O(n) + O(n^2) = O(n^2) == O(n*n)