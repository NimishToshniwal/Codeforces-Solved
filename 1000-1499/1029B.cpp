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
    ll a[n], ans = 0, h;
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(l, n)
    {
        h = l;
        while (h + 1 < n && a[h + 1] <= 2 * a[h])
            h++;
        ans = max(ans, h - l + 1);
        l = h;
    }
    cout << ans;
    return 0;
}