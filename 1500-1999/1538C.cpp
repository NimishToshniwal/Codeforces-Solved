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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> a(n);
        rep(i, n)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll count = 0;
        rep(i, n)
        {
            count += upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - a.begin();
            count -= lower_bound(a.begin() + i + 1, a.end(), l - a[i]) - a.begin();
        }
        cout << count << endl;
    }
    return 0;
}