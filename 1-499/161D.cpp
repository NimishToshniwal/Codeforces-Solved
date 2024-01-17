#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

ll n, x, y, k, ans = 0, dp[50001][501];
vector<vector<ll>> a(50001);

void solve(int curr, int par)
{
    dp[curr][0] = 1;
    for (auto it : a[curr])
    {
        if (it != par)
        {
            solve(it, curr);
            for (int i = 0; i <= k; i++)
            {
                ans += dp[curr][i] * dp[it][k - i];
                dp[curr][i] += dp[it][i];
            }
        }
    }
    for (int i = k; i > 0; i--)
        dp[curr][i] = dp[curr][i - 1];
    dp[curr][0] = 0;
}

int main()
{

    ios::sync_with_stdio(false);

    cin >> n >> k;
    rep(i, n - 1)
    {
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    solve(1, 0);
    cout << ans << endl;

    return 0;
}