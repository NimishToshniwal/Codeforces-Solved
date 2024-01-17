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
        int n;
        cin >> n;
        ll a[n], sum = 0, xo = 0;
        rep(i, n)
        {
            cin >> a[i];
            sum += a[i];
            xo ^= a[i];
        }
        cout << 2 << endl;
        cout << xo << " " << sum + xo << endl;
    }

    return 0;
}