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
    int a[n], MIN = INT_MAX;
    ll ans = 0;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] > 0)
            ans += a[i];
    }
    rep(i, n)
    {
        if (a[i] % 2)
            MIN = min(MIN, abs(a[i]));
    }
    if (ans % 2 == 0)
        ans -= MIN;
    cout << ans;

    return 0;
}