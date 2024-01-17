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
    int a[n + 1], b[n + 1], c[n + 1];
    rep(i, n)
    {
        cin >> a[i];
        c[a[i]] = i;
    }
    unordered_map<ll, ll> mp;
    rep(i, n)
    {
        cin >> b[i];
        mp[(i - c[b[i]] + n) % n]++;
    }
    ll MAX = INT_MIN;
    for (auto &it : mp)
    {
        MAX = max(MAX, it.second);
    }
    cout << MAX << endl;
    return 0;
}