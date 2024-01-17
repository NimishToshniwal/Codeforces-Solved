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
        ll n, k = 0;
        cin >> n;
        vector<int> v(n), a;
        rep(i, n) cin >> v[i];
        map<ll, ll> mp;
        set<ll> s;
        rep(i, n) mp[v[i]]++;
        rep(i, n)
        {
            mp[v[i]]--;
            s.insert(v[i]);
            while (s.find(k) != s.end())
            {
                k++;
            }
            if (mp[k] == 0)
            {
                s.clear();
                a.push_back(k);
                k = 0;
            }
        }
        cout << a.size() << endl;
        rep(i, a.size()) cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}