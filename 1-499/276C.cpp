#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, q, ans = 0, l, r;
    cin >> n >> q;
    vector<ll> a(n), pref(n, 0);
    rep(i, n)
    {
        cin >> a[i];
    }
    while (q--)
    {
        cin >> l >> r;
        pref[l - 1]++;
        if (r != n)
            pref[r]--;
    }
    for (ll i = 1; i < n; i++)
        pref[i] += pref[i - 1];
    sort(a.begin(), a.end());
    sort(pref.begin(), pref.end());
    rep(i, n)
    {
        // cout<<"a[i] = "<<a[i]<<" pref[i] = "<<pref[i]<<endl;
        ans += (pref[i] * a[i]);
    }
    cout << ans << endl;
    return 0;
}