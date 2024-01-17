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
        ll n;
        cin >> n;
        cout << n << endl;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
            ll x = 1;
            while (x <= a[i])
            {
                x *= 2;
            }
            cout << i + 1 << " " << x - a[i] << endl;
        }
    }

    return 0;
}