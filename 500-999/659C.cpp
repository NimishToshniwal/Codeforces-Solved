#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, m, k;
    cin >> n >> m;
    set<ll> s1, s2;
    rep1(i, n)
    {
        cin >> k;
        s1.insert(k);
    }
    rep1(i, m)
    {
        if (s1.find(i) == s1.end())
        {
            s2.insert(i);
            m -= i;
        }
    }
    cout << s2.size() << endl;
    for (auto it : s2)
        cout << it << " ";
    return 0;
}