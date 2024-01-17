#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, ans;
    cin >> n;
    ll x[n], h[n];
    rep(i, n)
    {
        cin >> x[i] >> h[i];
    }
    if (n == 1)
    {
        ans = 1;
    }
    else
    {
        ll lastcovered = x[0];
        ans = 2;
        for (int i = 1; i < n - 1; i++)
        {
            if (lastcovered < x[i] - h[i])
            {
                ans++;
                lastcovered = x[i];
            }
            else if (x[i] + h[i] < x[i + 1])
            {
                ans++;
                lastcovered = x[i] + h[i];
            }
            else
            {
                lastcovered = x[i];
            }
        }
    }
    cout << ans << endl;
    return 0;
}