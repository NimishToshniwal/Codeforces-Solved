#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

long long a[200005], pref[200005];
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, ans = 0;
        cin >> n >> x;
        rep1(i, n) cin >> a[i];
        sort(a + 1, a + n + 1);
        rep1(i, n)
            pref[i] = pref[i - 1] + a[i];
        for (int i = n; i >= 1; i--)
        {
            if (x > (a[i] * i) - pref[i])
            {
                ans = ((x + pref[i] - a[i] * i) / i) + a[i];
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}