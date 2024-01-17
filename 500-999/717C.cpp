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
    ll a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);
    ll ans = 0;
    rep(i, n)
    {
        ans += a[i] * a[n - i - 1];
        ans %= 10007;
    }
    cout << ans % 10007;
    return 0;
}