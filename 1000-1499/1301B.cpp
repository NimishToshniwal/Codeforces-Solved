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
        int n, MIN = INT_MAX, MAX = INT_MIN;
        cin >> n;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        rep(i, n)
        {
            if (i < n - 1 && a[i] == -1 && a[i + 1] != -1)
            {
                MIN = min(MIN, a[i + 1]);
                MAX = max(MAX, a[i + 1]);
            }
            if (i > 0 && a[i] == -1 && a[i - 1] != -1)
            {
                MIN = min(MIN, a[i - 1]);
                MAX = max(MAX, a[i - 1]);
            }
        }
        int ans = (MIN + MAX) >> 1;
        int req = 0;
        rep(i, n)
        {
            if (a[i] == -1)
                a[i] = ans;
            if (i > 0)
                req = max(req, abs(a[i] - a[i - 1]));
        }
        if (ans == -1)
            ans = 0;
        cout << req << " " << ans << endl;
    }

    return 0;
}