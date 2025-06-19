#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<int> colors = {s1, s2, s3, s4};
    int need_to_buy = 4 - colors.size();
    cout << need_to_buy << endl;
    return 0;
}