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
        int n, ans = 0;
        cin >> n;
        map<ll, int> mp, a;
        rep(i, n)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        for (auto it : mp)
        {
            for (int j = it.first; j <= n; j += it.first)
            {
                a[j] += it.second;
                ans = max(ans, a[j]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}