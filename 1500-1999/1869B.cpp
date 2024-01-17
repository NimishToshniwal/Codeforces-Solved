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
        ll n, k, a, b, ans, d1 = 1e10, d2 = 1e10;
        cin >> n >> k >> a >> b;
        ll x[n + 1], y[n + 1];
        rep1(i, n) cin >> x[i] >> y[i];
        ans = abs(x[a] - x[b]) + abs(y[a] - y[b]);
        rep1(i, k)
        {
            d1 = min(d1, abs(x[i] - x[a]) + abs(y[i] - y[a]));
            d2 = min(d2, abs(x[i] - x[b]) + abs(y[i] - y[b]));
            ans = min(d1 + d2, ans);
        }
        cout << ans << endl;
    }

    return 0;
}