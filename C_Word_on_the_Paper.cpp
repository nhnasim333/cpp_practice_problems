#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string word = "";
        for (int i = 0; i < 8; ++i) {
            string row;
            cin >> row;
            for (char c : row) {
                if (c != '.') word += c;
            }
        }
        cout << word << endl;
    }
    return 0;
}