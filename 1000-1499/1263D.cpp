#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
const int N = 2e5 + 100;
vector<int> adj[N];
int vis[N];
void dfs(int v)
{
    vis[v] = 1;
    for (auto it : adj[v])
    {
        if (!vis[it])
            dfs(it);
    }
}
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    rep(i, n)
    {
        string s;
        cin >> s;
        for (auto it : s)
        {
            adj[i].push_back(n + it - 'a');
            adj[n + it - 'a'].push_back(i);
        }
    }
    int ans = 0;
    for (int i = n; i < n + 26; i++)
    {
        if (!adj[i].empty() && vis[i] == 0)
        {
            dfs(i);
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}