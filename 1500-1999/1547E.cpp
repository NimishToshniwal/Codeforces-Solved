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
        ll n, k, x, MIN = INT_MAX;
        cin >> n >> k;
        ll a[n];
        rep(i, n)
        {
            a[i] = INT_MAX;
        }
        vector<ll> v;
        rep(i, k)
        {
            cin >> x;
            v.push_back(x - 1);
        }
        rep(i, k)
        {
            cin >> x;
            a[v[i]] = x;
        }
        rep(i, n)
        {
            MIN = min(MIN + 1, a[i]);
            a[i] = MIN;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            MIN = min(MIN + 1, a[i]);
            a[i] = MIN;
        }
        rep(i, n) cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}