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
        ll n, k, q;
        cin >> n >> k >> q;
        ll a[n];
        int count = 0;
        vector<ll> v;
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] <= q)
            {
                count++;
            }
            else
            {
                if (count + 1 - k > 0)
                    v.push_back(count + 1 - k);
                count = 0;
            }
        }
        if (count + 1 - k > 0)
            v.push_back(count + 1 - k);
        ll ans = 0;
        for (auto it : v)
            ans += (it * (it + 1)) / 2;
        cout << ans << endl;
    }

    return 0;
}