#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

const int MOD = 1e9 + 7;

int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    ll dp[2][n + 1];
    dp[1][0] = 1;
    dp[0][0] = 0;
    rep1(i, n)
    {
        dp[1][i] = 3 * dp[0][i - 1] % MOD;
        dp[0][i] = (2 * dp[0][i - 1] % MOD + dp[1][i - 1] % MOD) % MOD;
    }
    cout << dp[1][n];

    return 0;
}