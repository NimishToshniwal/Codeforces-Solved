#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
const int MOD = 1e9 + 7;
ll dp[22][1002];
int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    rep1(i, n) dp[1][i] = 1;
    for (int i = 2; i < 2 * (m + 1); i++)
    {
        rep1(j, n)
        {
            rep1(k, j)
            {
                dp[i][j] += dp[i - 1][k];
            }
            dp[i][j] %= MOD;
        }
    }
    // for(int i=1;i<2*(m+1);i++){
    //     for(int j=1;j<=n;j++) cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
    cout << dp[2 * m + 1][n];
    return 0;
}