#include <bits/stdc++.h>
using namespace std;

void rotate(int &a, int &b, int &c, int &d)
{
    int tmp = a;
    a = c;
    c = d;
    d = b;
    b = tmp;
}

bool is_beautiful(int a, int b, int c, int d)
{
    return (a < b && c < d && a < c && b < d);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool possible = false;
        for (int rot = 0; rot < 4; ++rot)
        {
            if (is_beautiful(a, b, c, d))
            {
                possible = true;
                break;
            }
            rotate(a, b, c, d);
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}