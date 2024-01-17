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
        ll x, y;
        cin >> x >> y;
        ll a, b;
        a = max(x, y);
        b = min(x, y);
        ll ans = 0;
        if (b >= a - b)
        {
            ans += (a - b);
            b -= (a - b);
            ans += ((2 * b) / 3);
        }
        else if (a > 2 * b)
        {
            ans += b;
        }

        cout << ans << endl;
    }

    return 0;
}