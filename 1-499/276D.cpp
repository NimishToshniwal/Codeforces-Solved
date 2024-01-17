#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll l, r, x;
    cin >> l >> r;
    x = l ^ r;
    ll idx = 0;
    // cout<<"x = "<<x<<endl;
    while (x)
    {
        x >>= 1;
        idx++;
        // cout<<"x = "<<x<<" idx = "<<idx<<endl;
    }
    ll ans = 0, c = 1;
    while (idx)
    {
        ans += c;
        c *= 2;
        // cout<<"ans = "<<ans<<" c = "<<c<<endl;
        idx--;
    }
    cout << ans;

    return 0;
}