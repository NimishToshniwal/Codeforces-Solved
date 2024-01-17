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
        ll n, sum = 0, MIN = 1e18;
        cin >> n;
        ll a[n], b[n];
        rep(i, n) cin >> a[i] >> b[i];
        rep(i, n)
        {
            sum += max(0LL, a[(i + 1) % n] - b[i]);
            MIN = min(MIN, min(b[i], a[(i + 1) % n]));
        }
        cout << sum + MIN << endl;
    }

    return 0;
}