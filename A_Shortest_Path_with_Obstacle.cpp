#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xA, yA, xB, yB, xF, yF;
        cin >> xA >> yA >> xB >> yB >> xF >> yF;
        int dist = abs(xA - xB) + abs(yA - yB);

        if (xA == xB && xA == xF)
        {
            if ((yF > min(yA, yB)) && (yF < max(yA, yB)))
            {
                dist += 2;
            }
        }
        else if (yA == yB && yA == yF)
        {
            if ((xF > min(xA, xB)) && (xF < max(xA, xB)))
            {
                dist += 2;
            }
        }
        cout << dist << endl;
    }
    return 0;
}