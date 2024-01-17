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
        int n, c, k, count = 0;
        cin >> n >> c >> k;
        int a[n];
        rep(i, n) cin >> a[i];
        sort(a, a + n);
        vector<int> dp(n + 1);
        rep1(i, n)
        {
            if (i == 1)
                dp[i] = a[i - 1];
            else if (i < k)
                dp[i] = dp[i - 1] + a[i - 1];
            else
                dp[i] = dp[i - k] + a[i - 1];
        }
        for (int i = n; i >= 0; i--)
        {
            if (dp[i] <= c)
            {
                count = i;
                break;
            }
        }
        cout << count << endl;

        // rep(i, n) cout<<a[i]<<" ";
        // cout<<endl;
        // rep1(i, n) cout<<dp[i]<<" ";
        // cout<<endl;
        // cout<<count<<endl;
    }

    return 0;
}