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
        double ans = 0, d, h;
        cin >> n >> d >> h;
        double a[n + 1];
        rep(i, n) cin >> a[i];
        a[n] = a[n - 1] + h;
        rep(i, n)
        {
            if (a[i + 1] - a[i] >= h)
                ans += ((d * h) / 2);
            else
            {
                ans += (d + d * (a[i] - a[i + 1] + h) / h) * (a[i + 1] - a[i]) / 2;
            }
        }
        cout << fixed << setprecision(9) << ans << endl;
    }

    return 0;
}