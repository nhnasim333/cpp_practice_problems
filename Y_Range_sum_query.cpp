// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, q; // ----> O(1)
//     cin >> n >> q;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) // ----> O(n)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < q; i++) // ----> O(q)
//     {
//         int l, r;
//         cin >> l >> r;
//         long long sum = 0;
//         for (int j = l - 1; j < r; j++) // ----> O(r - l + 1)
//         {
//             sum += arr[j];
//         }
//         cout << sum << endl;
//     }

//     return 0;
// }

// Total time complexity: O(n) + O(q * (r - l + 1)) = O(n + q * (r - l + 1))
// If we assume that the maximum value of (r - l + 1) is m, then the time complexity can be simplified to O(n + q * m).
// time limit per test1.5 seconds
// So if n = 10^5, q = 10^5, and m = 10^5, the maximum time complexity would be O(10^5 + 10^5 * 10^5) = O(10^5 + 10^10) = O(10^10).
// it's TLE error

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector<long long> prefixSum(n + 1);
    prefixSum[1] = arr[1];
    for (int i = 2; i <= n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = prefixSum[r] - prefixSum[l - 1];
        cout << sum << endl;
    }
    return 0;
}