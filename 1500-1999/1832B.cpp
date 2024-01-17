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
        ll n, k;
        cin >> n >> k;
        ll a[n], sum = 0;
        rep(i, n)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        ll p[n];
        p[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            p[i] = a[i] + p[i - 1];
        }
        int i = -1, j = n - k - 1;
        ll ans = p[j];
        while (k > 0)
        {
            i += 2;
            j++;
            ans = max(ans, p[j] - p[i]);
            k--;
        }
        cout << ans << endl;
    }

    return 0;
}