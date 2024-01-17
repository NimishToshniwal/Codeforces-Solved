#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, count = 0;
        cin >> n >> m;
        vector<string> s(n);
        rep(i, n) cin >> s[i];
        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
        rep(i, n)
        {
            rep(j, m)
            {
                if (s[i][j] == '*')
                    dp[i][j] = 1;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 2; j >= 1; j--)
                if (dp[i][j] == 1)
                {
                    dp[i][j] = 1 + min(dp[i + 1][j - 1], min(dp[i + 1][j], dp[i + 1][j + 1]));
                }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                count += dp[i][j];
            }
        }
        cout << count << endl;
    }

    return 0;
}