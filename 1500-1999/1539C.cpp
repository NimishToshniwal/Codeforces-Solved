#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, k, x, ans = 0;
    cin >> n >> k >> x;
    ll a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);
    vector<ll> d;
    rep(i, n - 1)
    {
        d.push_back(a[i + 1] - a[i]);
        // ans+=((a[i+1]-a[i]+x-1)/x)-1;
    }
    // rep(i, n-1) cout<<d[i]<<" ";
    // cout<<endl;
    sort(d.begin(), d.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (d[i] > x)
        {
            if (d[i] % x == 0)
            {
                if (k + 1 >= d[i] / x)
                {
                    k -= ((d[i] / x) - 1);
                    d[i] = 0;
                }
            }
            else
            {
                if (k >= d[i] / x)
                {
                    k -= d[i] / x;
                    d[i] = 0;
                }
            }
        }
    }
    int c = 0;
    // rep(i, n-1) cout<<d[i]<<" ";
    // cout<<endl;
    for (int i = 0; i < n - 1; i++)
    {
        if (d[i] > x)
            c++;
    }
    cout << c + 1 << endl;
    // cout<<ans+1<<endl;
    return 0;
}