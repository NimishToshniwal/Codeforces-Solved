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
        vector<ll> a(n);
        rep(i, n) cin >> a[i];
        map<ll, ll> mp;
        ll MAX = 0, count = 0;
        rep(i, n)
        {
            if (a[i] % k != 0)
            {
                mp[k - a[i] % k]++;
                MAX = max(MAX, mp[k - a[i] % k]);
            }
        }
        for (auto it : mp)
        {
            if (it.second == MAX)
            {
                count = max(count, k * (it.second - 1) + it.first + 1);
            }
        }
        cout << count << endl;
    }

    return 0;
}