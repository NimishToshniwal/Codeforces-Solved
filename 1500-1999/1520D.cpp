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
        ll a[n], sum = 0;
        rep(i, n)
        {
            cin >> a[i];
            a[i] -= i;
        }
        unordered_map<ll, ll> mp;
        rep(i, n)
        {
            if (mp.find(a[i]) == mp.end())
            {
                mp[a[i]] = 1;
            }
            else
                mp[a[i]]++;
        }
        for (auto i : mp)
        {
            ll k = i.second;
            sum += (k * (k - 1)) / 2;
        }
        cout << sum << endl;
    }

    return 0;
}