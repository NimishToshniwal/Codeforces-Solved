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
        ll n, c, d, count = 0;
        cin >> n >> c >> d;
        ll a[n + 1];
        ll ans = c * n + d;
        rep1(i, n) cin >> a[i];
        a[0] = 0;
        sort(a + 1, a + n + 1);
        // cout<<"ans = "<<ans<<endl;
        rep1(i, n)
        {
            if (a[i] != a[i - 1])
                count++;
            ans = min(ans, c * (n - count) + d * (a[i] - count));
            // cout<<"ans = "<<ans<<endl;
        }
        cout << ans << endl;
    }

    return 0;
}