#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int MAX = 100001;
    vector<long long> freq(MAX, 0);

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
    }

    vector<long long> dp(MAX, 0);
    dp[0] = 0;
    dp[1] = freq[1] * 1;
    for (int i = 2; i < MAX; ++i) {
        dp[i] = max(dp[i-1], dp[i-2] + freq[i] * i);
    }
    cout << dp[MAX-1] << endl;
    return 0;
}