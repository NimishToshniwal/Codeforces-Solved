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
        int n, k;
        cin >> n >> k;
        ll a[n], b[n];
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        ll MAX = 0, ans = 0, sum = 0;
        rep(i, n)
        {
            if (i < k)
            {
                sum += a[i];
                MAX = max(MAX, b[i]);
                ans = max(MAX * (k - 1 - i) + sum, ans);
                // cout<<"s = "<<sum<<" m = "<<MAX<<" m1 = "<<ans<<endl;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}