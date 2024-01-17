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
        ll n, a, MAX = 0, ans = 0;
        cin >> n;
        unordered_map<ll, ll> mp;
        rep(i, n)
        {
            cin >> a;
            mp[a]++;
            if (mp[a] > MAX)
                MAX = mp[a];
        }
        if (2 * MAX > n)
            ans = 2 * MAX - n;
        else if (n % 2)
            ans = 1;
        cout << ans << endl;
    }

    return 0;
}