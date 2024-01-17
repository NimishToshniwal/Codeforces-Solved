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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);
        rep(i, n) cin >> a[i];
        sort(a.begin(), a.end(), greater<ll>());
        for (int i = 1; i < n; i++)
        {
            a[i] += a[i - 1];
        }
        while (q--)
        {
            ll x;
            cin >> x;
            auto idx = lower_bound(a.begin(), a.end(), x);
            if (idx == a.end())
                cout << -1 << endl;
            else
            {
                cout << idx - a.begin() + 1 << endl;
            }
        }
    }

    return 0;
}