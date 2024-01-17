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
        ll a[n], ans = 0, MAX = INT_MIN;
        rep(i, n)
        {
            cin >> a[i];
            MAX = max(MAX, a[i]);
            if (a[i] < 0)
                ans = a[i];
        }
        if (ans != 0)
            cout << ans << endl;
        else
            cout << MAX << endl;
    }

    return 0;
}