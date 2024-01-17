#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
const int MOD = 1e9 + 7;
int n, k;
int dp[2005][2005];
int solve(int n, int k, int i)
{
    if (k == 0)
        return 1;
    else if (dp[i][k] != -1)
        return dp[i][k];
    int total = 0;
    for (int j = i; j <= n; j += i)
    {
        if (j % i == 0)
        {
            total += solve(n, k - 1, j) % MOD;
            total %= MOD;
        }
    }
    return dp[i][k] = total;
}
int main()
{

    ios::sync_with_stdio(false);
    cin >> n >> k;
    memset(dp, -1, sizeof(dp));
    cout << solve(n, k, 1);
    return 0;
}