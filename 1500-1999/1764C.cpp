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
        int a[n + 1];
        rep1(i, n) cin >> a[i];
        ll ans = n / 2;
        sort(a + 1, a + n + 1);
        rep1(i, n - 1)
        {
            if (a[i] != a[i + 1])
                ans = max(ans, i * (n - i));
        }
        cout << ans << endl;
    }

    return 0;
}