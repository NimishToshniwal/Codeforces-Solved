#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
const int MOD = 1e8;
int n1, n2, k1, k2;
int dp[105][105][11][11];

int solve(int n1, int n2, int i, int j)
{
    if (n1 + n2 == 0)
        return 1;
    if (dp[n1][n2][i][j] != -1)
        return dp[n1][n2][i][j];
    int c1 = 0;
    if (i < k1 && n1 > 0)
        c1 = solve(n1 - 1, n2, i + 1, 0) % MOD;
    int c2 = 0;
    if (j < k2 && n2 > 0)
        c2 = solve(n1, n2 - 1, 0, j + 1) % MOD;
    return dp[n1][n2][i][j] = (c1 + c2) % MOD;
}

int main()
{

    ios::sync_with_stdio(false);

    cin >> n1 >> n2 >> k1 >> k2;
    memset(dp, -1, sizeof(dp));
    cout << solve(n1, n2, 0, 0);

    return 0;
}