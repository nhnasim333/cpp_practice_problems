#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
int par[N], sz[N];

int find(int node)
{
    if (par[node] == node)
        return node;
    return par[node] = find(par[node]);
}

void dsu_union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        return;
    if (sz[a] < sz[b])
        swap(a, b);
    par[b] = a;
    sz[a] += sz[b];
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        par[i] = i;
        sz[i] = 1;
    }

    vector<pair<int, int>> extra;
    for (int i = 1; i <= n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        if (find(a) == find(b))
        {
            extra.push_back({a, b});
        }
        else
        {
            dsu_union(a, b);
        }
    }

    vector<int> leaders;
    for (int i = 1; i <= n; i++)
    {
        if (find(i) == i)
            leaders.push_back(i);
    }

    int t = leaders.size() - 1;
    cout << t << endl;

    for (int i = 0; i < t; i++)
    {
        cout << extra[i].first << " " << extra[i].second << " "
             << leaders[i] << " " << leaders[i + 1] << endl;
    }

    return 0;
}
