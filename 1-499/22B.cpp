#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    ll dp[n + 1][m + 1];
    ll peri = INT_MIN;
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    rep1(i, n)
    {
        rep1(j, m)
        {
            char a;
            cin >> a;
            // cout<<"iushrals"<<endl;
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + 1 - (a - 48);
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cout << dp[i][j]<<" ";
        }
        cout << endl;
    }

    rep(i, n)
    {
        rep(j, m)
        {
            for (ll k = i + 1; k <= n; k++)
            {
                for (ll l = j + 1; l <= m; l++)
                {
                    // cout<<"siefie";
                    if (dp[k][l] - dp[k][j] - dp[i][l] + dp[i][j] == (l - j) * (k - i))
                        peri = max(peri, 2 * (k + l - i - j));
                }
            }
        }
    }
    cout << peri << endl;
    return 0;
}