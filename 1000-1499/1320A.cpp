// 9 5 -2 5 5 9
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    unordered_map<ll, ll> mp;
    rep(i, n)
    {
        ll a;
        cin >> a;
        mp[i - a - 1] += a;
    }
    ll MAX = INT_MIN;
    for (auto it : mp)
    {
        if ((it.second) > MAX)
            MAX = it.second;
    }
    cout << MAX << endl;
    return 0;
}