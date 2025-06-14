#include <bits/stdc++.h>
using namespace std;

bool has_distinct_digits(int y) {
    bool used[10] = {false};
    while (y > 0) {
        int d = y % 10;
        if (used[d]) return false;
        used[d] = true;
        y /= 10;
    }
    return true;
}

int main() {
    int y;
    cin >> y;
    for (int i = y + 1; ; ++i) {
        if (has_distinct_digits(i)) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}