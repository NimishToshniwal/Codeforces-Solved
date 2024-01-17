#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
vector<int> v[100005];
bool vis[100005];
ll a[100005];
ll dfs(ll n)
{
    ll MIN, b;
    vis[n] = 1;
    MIN = a[n];
    for (int i = 0; i < v[n].size(); i++)
    {
        b = v[n][i];
        if (!vis[b])
        {
            MIN = min(MIN, dfs(b));
        }
    }
    return MIN;
}
int main()
{

    ios::sync_with_stdio(false);
    ll n, m, x, y;
    ll ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            ans += dfs(i);
        }
    }
    cout << ans << endl;
    return 0;
}