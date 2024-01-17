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
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        rep(i, n)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        ll count = 0, ans = 0;
        rep(i, n)
        {
            count++;
            if (count * a[i] >= x)
            {
                count = 0;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}