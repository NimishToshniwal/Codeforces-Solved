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
        int a[n];
        rep(i, n) cin >> a[i];
        bool f = 0;
        sort(a, a + n);
        if (a[0] == a[n - 1])
            cout << -1 << endl;
        else
        {
            int ans = 0;
            for (int i = 1; i < n; i++)
            {
                ans = __gcd(ans, a[i] - a[0]);
            }
            cout << ans << endl;
        }
    }

    return 0;
}