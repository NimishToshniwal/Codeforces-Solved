#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, p, ans = 0;
    cin >> n >> p;
    vector<ll> a(n), pr(n), su(n);
    rep(i, n) cin >> a[i];
    pr[0] = a[0];
    su[n - 1] = a[n - 1];
    for (int i = 1; i < n; i++)
        pr[i] = pr[i - 1] + a[i];
    for (int i = n - 2; i >= 0; i--)
        su[i] = su[i + 1] + a[i];
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, (pr[i] % p) + (su[i + 1] % p));
    }
    cout << ans << endl;
    return 0;
}