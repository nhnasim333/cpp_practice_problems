#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char nums[105];
    int len = 0;
    for (char c : s) {
        if (c != '+') nums[len++] = c;
    }
    sort(nums, nums + len);
    for (int i = 0; i < len; ++i) {
        if (i > 0) cout << '+';
        cout << nums[i];
    }
    cout << endl;
    return 0;
}