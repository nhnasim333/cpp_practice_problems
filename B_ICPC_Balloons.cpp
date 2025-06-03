#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int solved[26] = {0};
        for (int i = 0; i < n; i++) {
            int idx = s[i] - 'A';
            if (solved[idx] == 0) {
                count += 2;
                solved[idx] = 1;
            } else {
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}