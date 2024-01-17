#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll a, b, k;
    cin >> a >> b;
    k = __gcd(a, b);
    set<ll> st;
    for (int i = 1; i * i <= k; i++)
    {
        if (k % i == 0)
        {
            st.insert(i);
            st.insert(k / i);
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        auto it = st.upper_bound(r);
        if (it == st.begin() || *(--it) < l)
            cout << -1 << endl;
        else
            cout << *it << endl;
    }

    return 0;
}