#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, l;
    cin >> n >> l;
    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll MAX = 2 * max(a[0], l - a[n - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        if (MAX < a[i + 1] - a[i])
        {
            MAX = a[i + 1] - a[i];
        }
        continue;
    }
    cout << fixed << setprecision(10) << MAX / 2.00;
    return 0;
}