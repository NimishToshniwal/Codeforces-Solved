#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    char a;
    unordered_map<char, ll> mp;
    rep(i, k)
    {
        cin >> a;
        mp[a] = 1;
    }
    ll ans = 0, count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (mp.find(s[i]) != mp.end())
        {
            count++;
            // cout<<"i = "<<i<<" count = "<<count<<endl;
        }
        else
        {
            ans += (count) * (count + 1) / 2;
            count = 0;
            // cout<<"i = "<<i<<" count = "<<count<<endl;
        }
    }
    ans += (count) * (count + 1) / 2;
    cout << ans << endl;
    return 0;
}