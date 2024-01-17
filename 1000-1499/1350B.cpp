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
        int a[100005], dp[100005], MAX = INT_MIN;
        dp[0] = 1;
        rep1(i, n)
        {
            cin >> a[i];
            dp[i] = 1;
        }
        rep1(i, n)
        {
            for (ll j = 2, k = i * j; k <= n; j++, k = i * j)
            {
                if (a[k] > a[i])
                    dp[k] = max(dp[k], dp[i] + 1);
            }
            // rep1(i, n)
            // {
            //     cout << dp[i] << " ";
            // }
            // cout << endl;
            MAX = max(MAX, dp[i]);
        }
        cout << MAX << endl;
    }

    return 0;
}