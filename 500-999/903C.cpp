#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    ll a[n], ans = 0;
    map<ll, ll> mp;
    rep(i, n)
    {
        cin >> a[i];
        mp[a[i]]++;
        ans = max(ans, mp[a[i]]);
    }
    cout << ans << endl;

    return 0;
}