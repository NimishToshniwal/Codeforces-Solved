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
        int n;
        cin >> n;
        ll mi = INT_MAX, Mi = INT_MAX, ans = 0;
        int m;
        rep(i, n)
        {
            cin >> m;
            ll a[m];
            rep(j, m)
            {
                cin >> a[j];
            }
            sort(a, a + m);
            mi = min(mi, a[1]);
            Mi = min(Mi, a[0]);
            ans += a[1];
        }
        cout << ans + Mi - mi << endl;
    }

    return 0;
}