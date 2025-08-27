#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            freq[x]++;
        }
        int score = 0;
        for (auto& p : freq) {
            score += p.second / 2;
        }
        cout << score << endl;
    }
    return 0;
}