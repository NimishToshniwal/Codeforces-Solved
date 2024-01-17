#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll sum = accumulate(a.begin(), a.end(), 0ll);
    cin >> m;
    while (m--)
    {
        ll x, y;
        cin >> x >> y;
        ll idx = lower_bound(a.begin(), a.end(), x) - a.begin();
        ll MIN = 2e18;
        if (idx > 0)
            MIN = min(MIN, (x - a[idx - 1]) + max(0ll, y - sum + a[idx - 1]));
        if (idx < n)
            MIN = min(MIN, max(0ll, y - sum + a[idx]));
        cout << MIN << endl;
    }

    return 0;
}