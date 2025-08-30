#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string b; cin >> b;

        set<char> st(b.begin(), b.end());
        string r(st.begin(), st.end());

        unordered_map<char, char> decode_map;
        int len = r.size();
        for (int i = 0; i < len; ++i) {
            decode_map[r[i]] = r[len - 1 - i];
        }

        string s;
        for (char ch : b) {
            s += decode_map[ch];
        }
        cout << s << endl;
    }
    return 0;
}