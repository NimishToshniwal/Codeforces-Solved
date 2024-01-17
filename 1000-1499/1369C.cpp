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
        ll n, k, ans = 0;
        cin >> n >> k;
        vector<ll> a(n), w(k);
        rep(i, n) cin >> a[i];
        rep(i, k) cin >> w[i];
        sort(a.begin(), a.end());
        sort(w.begin(), w.end(), greater<ll>());
        int l = 0, r = n - k;
        for (int i = 0; i < k; i++)
        {
            if (w[i] == 1)
            {
                l = r;
            }
            ans += a[l] + a[r];
            r++;
            l += w[i] - 1;
        }
        cout << ans << endl;
    }

    return 0;
}