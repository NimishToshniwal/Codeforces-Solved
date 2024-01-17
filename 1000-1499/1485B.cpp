#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, q, k, l, r;
    cin >> n >> q >> k;
    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    while (q--)
    {
        cin >> l >> r;
        cout << k + a[r - 1] - a[l - 1] - 2 * (r - l) - 1 << endl;
    }

    return 0;
}