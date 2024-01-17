#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    if (n == 1)
        cout << 3 << endl;
    else
    {
        n -= 1;
        ll k = (n + 2) / 3, m = n % 3;
        ll ans = 4 * (k + 1);
        if (m == 0)
            cout << ans << endl;
        else if (m == 1)
        {
            cout << ans - 3 << endl;
        }
        else
            cout << ans - 1 << endl;
    }

    return 0;
}