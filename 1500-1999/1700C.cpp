#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        ll max = a[0], curr = 0;
        for (ll i = 1; i < n; i++)
        {
            a[i] -= curr;
            if (a[i] < max)
            {
                max = a[i];
            }
            else
            {
                curr += a[i] - max;
            }
            a[i] = max;
        }
        max = a[n - 1];
        ll ans = curr;
        curr = 0;
        for (ll i = n - 2; i >= 0; i--)
        {
            a[i] -= curr;
            if (a[i] > max)
            {
                curr += a[i] - max;
            }
            a[i] = max;
        }
        cout << ans + curr + abs(a[0]) << endl;
    }
    return 0;
}