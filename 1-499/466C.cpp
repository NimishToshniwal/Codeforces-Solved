#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, sum = 0;
    cin >> n;
    vector<ll> a(n);
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 3 != 0)
        cout << 0 << endl;
    else
    {
        ll x = 0, y = 0, s1 = 0;
        rep(i, n - 1)
        {
            s1 += a[i];
            if (s1 == 2 * sum / 3)
                y += x;
            if (s1 == sum / 3)
                x++;
        }
        cout << y << endl;
    }

    return 0;
}