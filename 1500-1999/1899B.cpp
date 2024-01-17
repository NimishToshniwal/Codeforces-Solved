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
        ll ans = 0;
        ll a[160000];
        rep(i, n) cin >> a[i];
        for (ll k = 1; k <= n; k++)
        {
            if (n % k == 0)
            {
                ll MAX = 0, MIN = 1e18;
                for (ll i = 0; i < n; i += k)
                {
                    ll curr = 0;
                    rep(j, k) curr += a[i + j];
                    MAX = max(MAX, curr);
                    MIN = min(MIN, curr);
                }
                ans = max(ans, MAX - MIN);
            }
        }
        cout << ans << endl;
    }

    return 0;
}