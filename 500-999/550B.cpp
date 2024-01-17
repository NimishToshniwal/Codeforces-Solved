#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, l, r, k, count = 0;
    cin >> n >> l >> r >> k;
    ll a[n];
    rep(i, n) cin >> a[i];
    rep(i, 1 << n)
    {
        ll MAX = 0, MIN = 0x3f3f3f3f, sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (((i >> j) & 1) == 1)
            {
                sum += a[j];
                MAX = max(MAX, a[j]);
                MIN = min(MIN, a[j]);
            }
        }
        if (sum >= l && sum <= r && MAX - MIN >= k)
            count++;
    }
    cout << count << endl;

    return 0;
}