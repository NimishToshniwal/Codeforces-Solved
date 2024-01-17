#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
const int MOD = 1e9 + 7;
int n, k, d, count = 0;
int dp[200][200];
int solve(int w, int currMAX)
{
    if (w < 0)
        return 0;
    if (w == 0)
    {
        if (currMAX < d)
            return 0;
        else
            return 1;
    }
    if (dp[w][currMAX] != -1)
        return dp[w][currMAX];
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans += solve(w - i, max(currMAX, i));
        ans %= MOD;
    }
    ans %= MOD;
    return dp[w][currMAX] = ans;
}

int main()
{

    ios::sync_with_stdio(false);

    cin >> n >> k >> d;
    memset(dp, -1, sizeof(dp));
    cout << solve(n, 0);

    return 0;
}