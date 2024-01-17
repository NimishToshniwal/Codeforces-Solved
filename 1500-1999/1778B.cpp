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
        ll ans = 1e9;
        ll n, m, d;
        cin >> n >> m >> d;
        ll a[n], v[n + 1], p[m];
        rep(i, n)
        {
            cin >> a[i];
            v[a[i]] = i;
        }
        rep(i, m) cin >> p[i];
        for (int i = 1; i < m; i++)
        {
            ans = min(ans, v[p[i]] - v[p[i - 1]]);
            if (d < n - 1)
                ans = min(ans, v[p[i - 1]] - v[p[i]] + d + 1);
            ans = max(0ll, ans);
        }
        cout << ans << endl;
    }

    return 0;
}