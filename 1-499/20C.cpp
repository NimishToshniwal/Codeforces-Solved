#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
const int N = 1e5 + 5;
vector<pair<int, int>> weight[N];
int vis[N], parent[N], dis[N], n, e;

bool solve(int l, int r)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INFINITY;
    }
    pq.push({0, l});
    parent[l] = -1;
    dis[l] = 0;
    while (!pq.empty())
    {
        int t = pq.top().second;
        pq.pop();
        if (t == r)
            return true;
        vis[t] = 1;
        for (auto it : weight[t])
        {
            int v = it.first, w = it.second;
            if ((!vis[v]) && (dis[t] + w < dis[v]))
            {
                dis[v] = dis[t] + w;
                pq.push({dis[v], v});
                parent[v] = t;
            }
        }
    }
    return false;
}

int main()
{

    ios::sync_with_stdio(false);

    int u, v, w;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        weight[u].push_back({v, w});
        weight[v].push_back({u, w});
    }
    if (solve(1, n))
    {
        vector<int> p;
        int i = n;
        while (i != -1)
        {
            p.push_back(i);
            i = parent[i];
        }
        for (int i = p.size() - 1; i >= 0; i--)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    else
        cout << -1 << endl;

    return 0;
}