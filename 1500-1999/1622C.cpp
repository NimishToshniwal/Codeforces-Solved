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
        ll sum = 0, suff = 0, MIN = 0;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        MIN = max(MIN, sum - k);
        for (int i = 1; i < n; i++)
        {
            suff += a[n - i];
            MIN = min(MIN, max((sum - k - suff + i * 1ll * (a[0] + 1)) / (i + 1), 0ll) + i);
        }
        cout << MIN << endl;
    }

    return 0;
}