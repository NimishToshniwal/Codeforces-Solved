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
        vector<pair<ll, ll>> v(n);
        rep(i, n)
        {
            cin >> v[i].first;
        }
        ll sum = 0;
        rep(i, n)
        {
            cin >> v[i].second;
            sum += v[i].second;
        }
        sort(v.begin(), v.end());
        ll ans = sum;
        rep(i, n)
        {
            sum -= v[i].second;
            ans = min(ans, max(v[i].first, sum));
        }
        cout << ans << endl;
    }

    return 0;
}