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
        ll n, m;
        cin >> n >> m;
        ll ans = 0;
        vector<vector<ll>> v(m, vector<ll>(3));
        rep(i, m)
        {
            cin >> v[i][1] >> v[i][0];
            v[i][2] = i + 1;
        }
        sort(v.begin(), v.end());
        while (v.size() > 2 * n)
            v.pop_back();
        for (auto &it : v)
            swap(it[0], it[1]);
        sort(v.begin(), v.end());
        for (auto &it : v)
            ans += it[1];
        cout << ans << endl;
        rep(i, n) cout << v[i][2] << " " << v[2 * n - i - 1][2] << endl;
        cout << endl;
    }

    return 0;
}