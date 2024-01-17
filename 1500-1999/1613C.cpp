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
        ll n, h;
        cin >> n >> h;
        vector<ll> v(n);
        rep(i, n) cin >> v[i];
        ll s = 1, e = 1e18;
        while (s <= e)
        {
            ll m = (e - s) / 2 + s;
            ll sum = m;
            rep(i, n - 1) sum += min(m, v[i + 1] - v[i]);
            if (sum < h)
                s = m + 1;
            else
                e = m - 1;
        }
        cout << e + 1 << endl;
    }

    return 0;
}