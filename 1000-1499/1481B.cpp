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
        ll n, k, ans;
        cin >> n >> k;
        int a[n + 1];
        rep1(i, n) cin >> a[i];
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i + 1])
            {
                a[i] = a[i] + 1;
                ans = i;
                i = 0;
                k--;
                if (k == 0)
                {
                    cout << ans << endl;
                    break;
                }
            }
        }
        if (k > 0)
            cout << -1 << endl;
    }

    return 0;
}