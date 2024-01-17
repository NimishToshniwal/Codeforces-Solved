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
        int n;
        cin >> n;
        ll a[n + 1];
        rep1(i, n) cin >> a[i];
        vector<ll> dp(n + 1, -1e15), mx(n + 1, -1e15);
        dp[1] = 0;
        mx[a[1]] = -1;
        for (ll i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1];
            dp[i] = max(dp[i], mx[a[i]] + i + 1);
            mx[a[i]] = max(mx[a[i]], dp[i - 1] - i);
        }
        // rep1(i,n) cout<<dp[i]<<" ";
        // cout<<endl;
        // rep1(i,n) cout<<mx[i]<<" ";
        // cout<<endl;
        cout << dp[n] << endl;
    }

    return 0;
}