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
        ll a[n];
        rep(i, n) cin >> a[i];
        bool f = 2;
        sort(a, a + n);
        while (a[n - 1] > 0)
        {
            int count = 0;
            rep(i, n)
            {
                count += a[i] % k;
                a[i] /= k;
            }
            if (count > 1)
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}