#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
bool f;
void dfs(ll curr, vector<bool> &vis, set<ll> adj[])
{
    vis[curr] = 1;
    ll countVis = 0;
    for (auto it : adj[curr])
    {
        if (vis[it])
        {
            countVis++;
            continue;
        }
        dfs(it, vis, adj);
    }
    if (countVis > 1)
        f = 1;
}
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n + 1);
        rep1(i, n) cin >> a[i];
        set<ll> adj[n + 1];
        rep1(i, n)
        {
            adj[i].insert(a[i]);
            adj[a[i]].insert(i);
        }
        vector<bool> vis(n + 1);
        ll countComp = 0, countCycle = 0;
        rep1(i, n)
        {
            if (!vis[i])
            {
                countComp++;
                f = 0;
                dfs(i, vis, adj);
                if (f)
                    countCycle++;
            }
        }
        if (countComp > countCycle)
            cout << countCycle + 1 << " ";
        else
            cout << countCycle << " ";
        cout << countComp << endl;
    }

    return 0;
}