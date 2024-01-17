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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        ll ans = 0;
        rep(i, n)
        {
            cin >> a[i];
            ans += (a[i] / k);
            a[i] = a[i] % k;
        }
        sort(a.begin(), a.end());
        ll i = 0, j = n - 1;
        while (i < j)
        {
            if (a[i] + a[j] >= k)
            {
                ans++;
                // cout<<"ans = "<<ans<<" i = "<<i<<" j = "<<j<<endl;
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}