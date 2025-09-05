#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj_list[100005];
long long dis[100005];
int parent[100005];

void dijkstra(int src, int n)
{
    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        parent[i] = -1;
    }

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        auto [par_dis, par_node] = pq.top();
        pq.pop();

        if (par_dis != dis[par_node])
            continue;

        for (auto [child_node, child_dis] : adj_list[par_node])
        {
            if (par_dis + child_dis < dis[child_node])
            {
                dis[child_node] = par_dis + child_dis;
                parent[child_node] = par_node;
                pq.push({dis[child_node], child_node});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj_list[a].push_back({b, w});
        adj_list[b].push_back({a, w});
    }

    dijkstra(1, n);

    if (dis[n] == LLONG_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> path;
        for (int cur = n; cur != -1; cur = parent[cur])
        {
            path.push_back(cur);
        }
        reverse(path.begin(), path.end());
        for (int v : path)
            cout << v << " ";
        cout << endl;
    }

    return 0;
}
