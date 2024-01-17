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
        bool f = 0;
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] >= 0)
                f = 1;
        }
        if (f)
        {
            ll sum1 = 0, sum2 = 0;
            rep(i, n)
            {
                if (i % 2 == 0)
                    sum1 += max(a[i], 0);
                else
                    sum2 += max(a[i], 0);
            }
            cout << max(sum1, sum2) << endl;
        }
        else
        {
            int ans = a[0];
            rep(i, n)
            {
                ans = max(a[i], ans);
            }
            cout << ans << endl;
        }
    }
    return 0;
}