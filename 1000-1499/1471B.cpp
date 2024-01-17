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
        ll n, x;
        cin >> n >> x;
        ll a[n];
        rep(i, n) cin >> a[i];
        ll ans = 0, k = 1;
        for (int i = 0; a[i] % k == 0; i = i % n)
        {
            ans += a[i];
            if (i + 1 == n)
            {
                k = k * x;
            }
            i++;
        }
        cout << ans << endl;
    }

    return 0;
}