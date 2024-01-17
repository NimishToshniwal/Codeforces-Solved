#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size(), ans, f = 1;
    rep(i, n)
    {
        if (s[i] == 'm' || s[i] == 'w')
        {
            ans = 0;
            f = 0;
        }
    }
    if (f)
    {
        ll dp[100005];
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            if (s.substr(i - 2, 2) == "nn" || s.substr(i - 2, 2) == "uu")
                dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
            else
                dp[i] = dp[i - 1];
        }
        ans = dp[n];
    }
    cout << ans << endl;

    return 0;
}