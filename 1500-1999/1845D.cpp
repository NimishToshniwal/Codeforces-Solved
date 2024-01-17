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
        ll n;
        cin >> n;
        ll a[n];
        rep(i, n) cin >> a[i];
        multiset<ll> s;
        ll suff = 0;
        s.insert(suff);
        for (int i = n - 1; i >= 0; i--)
        {
            suff += a[i];
            s.insert(suff);
        }
        // for(auto it:s) cout<<it<<" ";
        // cout<<endl;
        ll k = 0, pref = 0, MAX = *s.rbegin();
        rep(i, n)
        {
            pref += a[i];
            s.erase(s.find(suff));
            suff -= a[i];
            ll num = *s.rbegin();
            ll ans = pref + num;
            if (ans > MAX)
            {
                MAX = ans;
                k = pref;
            }
        }
        cout << k << endl;
    }

    return 0;
}